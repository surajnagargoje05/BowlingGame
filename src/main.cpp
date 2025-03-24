// main.cpp
#include <iostream>

#include "../include/BowlingGame.h"

using namespace std;

int main() {
  while (true) {
    BowlingGame game;

    cout << "\n--- Bowling Game ---\n" << endl;

    for (int frameNum = 1; frameNum <= 10; ++frameNum) {
      int firstRoll, secondRoll = 0, thirdRoll = 0;

      cout << "Frame " << frameNum << " - Enter pins for first roll: ";
      cin >> firstRoll;
      game.roll(firstRoll);

      if (firstRoll != 10 || frameNum == 10) {
        cout << "Frame " << frameNum << " - Enter pins for second roll: ";
        cin >> secondRoll;
        game.roll(secondRoll);

        if (frameNum == 10 && (firstRoll + secondRoll >= 10)) {
          cout << "Frame " << frameNum << " - Enter pins for third roll: ";
          cin >> thirdRoll;
          game.roll(thirdRoll);
        }
      }
    }

    cout << "\nTotal Score: " << game.getScore() << endl;

    char choice;
    cout << "\nDo you want to play again? (y/n): ";
    cin >> choice;
    if (choice != 'y' && choice != 'Y') {
      break;
    }
  }
  return 0;
}
