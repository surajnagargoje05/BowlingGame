// Frame.h
#ifndef FRAME_H
#define FRAME_H

#include <vector>

/**
 * @class Frame
 * @brief Represents a single frame in a bowling game.
 */
class Frame {
 public:
  /**
   * @brief Checks if the current frame is a strike.
   * @param rollIndex The current roll index.
   * @param rolls The vector of all rolls.
   * @return True if it's a strike, otherwise false.
   */
  bool isStrike(int rollIndex, const std::vector<int>& rolls);

  /**
   * @brief Checks if the current frame is a spare.
   * @param rollIndex The current roll index.
   * @param rolls The vector of all rolls.
   * @return True if it's a spare, otherwise false.
   */
  bool isSpare(int rollIndex, const std::vector<int>& rolls);

  /**
   * @brief Sums the number of pins knocked down in the current frame.
   * @param rollIndex The current roll index.
   * @param rolls The vector of all rolls.
   * @return The sum of pins knocked down in the frame.
   */
  int sumOfBallsInFrame(int rollIndex, const std::vector<int>& rolls);

  /**
   * @brief Calculates the spare bonus for the current frame.
   * @param rollIndex The current roll index.
   * @param rolls The vector of all rolls.
   * @return The spare bonus.
   */
  int spareBonus(int rollIndex, const std::vector<int>& rolls);

  /**
   * @brief Calculates the strike bonus for the current frame.
   * @param rollIndex The current roll index.
   * @param rolls The vector of all rolls.
   * @return The strike bonus.
   */
  int strikeBonus(int rollIndex, const std::vector<int>& rolls);
};

#endif  // FRAME_H
