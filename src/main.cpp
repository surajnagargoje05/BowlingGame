#include <iostream>
#include <limits>
#include "../include/BowlingGame.h"

using namespace std;

int getValidatedRollInput(int min, int max, const string& prompt) {
    int pins;
    while (true) {
        cout << prompt;
        if (cin >> pins) {
            if (pins >= min && pins <= max)
                return pins;
            else
                cout << "   Enter a number between " << min << " and " << max << ".\n";
        } else if (cin.eof()) {
            cout << "\n   Input stream closed. Exiting.\n";
            exit(0);
        } else {
            cout << "   Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

char getValidatedChoice(const string& prompt) {
    string input;
    while (true) {
        cout << prompt;
        cin >> input;
        if (cin.eof()) {
            cout << "\n   Input stream closed. Exiting.\n";
            exit(0);
        }

        if (input == "y" || input == "Y" || input == "n" || input == "N") {
            return input[0];
        } else {
            cout << "   Invalid choice. Enter 'y' or 'n'.\n";
        }
    }
}

int main() {
    while (true) {
        BowlingGame game;
        cout << "\n --- Bowling Game --- \n" << endl;

        for (int frameNum = 1; frameNum <= 10; ++frameNum) {
            cout << "\nFrame " << frameNum << ":" << endl;
            int firstRoll = getValidatedRollInput(0, 10, "  - First roll: ");
            game.roll(firstRoll);

            int secondRoll = 0, thirdRoll = 0;

            if (frameNum < 10) {
                if (firstRoll == 10) {
                    continue;
                }

                int maxSecond = 10 - firstRoll;
                secondRoll = getValidatedRollInput(0, maxSecond, "  - Second roll: ");
                game.roll(secondRoll);
            } else {
                // 10th frame logic
                secondRoll = getValidatedRollInput(0, 10, "  - Second roll: ");
                game.roll(secondRoll);

                if (firstRoll == 10 || firstRoll + secondRoll == 10) {
                    thirdRoll = getValidatedRollInput(0, 10, "  - Third roll: ");
                    game.roll(thirdRoll);
                }
            }
        }

        cout << "\nTotal Score: " << game.getScore() << endl;

        char choice = getValidatedChoice("\n Play again? (y/n): ");
                if (choice != 'y' && choice != 'Y') {
                    cout << "\n Thanks for playing!\n";
                    break;
                }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // To Clear buffer
    }

    return 0;
}
