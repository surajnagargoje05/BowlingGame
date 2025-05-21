// BowlingGame.h
#ifndef BOWLINGGAME_H
#define BOWLINGGAME_H

#include <vector>

#include "Frame.h"

/**
 * @class BowlingGame
 * @brief Represents a bowling game with 10 frames.
 */
class BowlingGame {
 private:
  /// Stores the number of pins knocked down in each roll.
  std::vector<int> rolls;

 public:
  /**
   * @brief Constructs a new BowlingGame object.
   */
  BowlingGame();

  /**
   * @brief Records the number of pins knocked down in a single roll.
   * @param pins The number of pins knocked down.
   */
  void roll(int pins);

  /**
   * @brief Calculates and returns the total score of the game.
   * @return The total score.
   */
  int getScore();
};

#endif  // BOWLINGGAME_H
