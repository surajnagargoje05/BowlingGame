// BowlingGame.cpp
#include "../include/BowlingGame.h"

#include <iostream>

using namespace std;

/**
 * @brief Constructs a new BowlingGame object.
 */
BowlingGame::BowlingGame() { rolls.reserve(21); }

/**
 * @brief Records the number of pins knocked down in a single roll.
 * @param pins The number of pins knocked down.
 */
void BowlingGame::roll(int pins) { rolls.push_back(pins); }

/**
 * @brief Calculates and returns the total score of the game.
 * @return The total score.
 */
int BowlingGame::getScore() {
  Frame frame;
  int score = 0;
  int rollIndex = 0;

  //strike = down all 10 pins in your first try
  //spare = knock down all 10 pins using two tries.

  for (int frameNum = 0; frameNum < 10; frameNum++) {
    if (frame.isStrike(rollIndex, rolls)) {
      score += 10 + frame.strikeBonus(rollIndex, rolls);
      rollIndex += 1;
    } else if (frame.isSpare(rollIndex, rolls)) {
      score += 10 + frame.spareBonus(rollIndex, rolls);
      rollIndex += 2;
    } else {
      score += frame.sumOfBallsInFrame(rollIndex, rolls);
      rollIndex += 2;
    }
  }
  return score;
}
