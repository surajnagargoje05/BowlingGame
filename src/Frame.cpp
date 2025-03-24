// Frame.cpp
#include "../include/Frame.h"

/**
 * @brief Checks if the current frame is a strike.
 * @param rollIndex The current roll index.
 * @param rolls The vector of all rolls.
 * @return True if it's a strike, otherwise false.
 */
bool Frame::isStrike(int rollIndex, const std::vector<int>& rolls) {
  return rolls[rollIndex] == 10;
}

/**
 * @brief Checks if the current frame is a spare.
 * @param rollIndex The current roll index.
 * @param rolls The vector of all rolls.
 * @return True if it's a spare, otherwise false.
 */
bool Frame::isSpare(int rollIndex, const std::vector<int>& rolls) {
  return rolls[rollIndex] + rolls[rollIndex + 1] == 10;
}

/**
 * @brief Sums the number of pins knocked down in the current frame.
 * @param rollIndex The current roll index.
 * @param rolls The vector of all rolls.
 * @return The sum of pins knocked down in the frame.
 */
int Frame::sumOfBallsInFrame(int rollIndex, const std::vector<int>& rolls) {
  return rolls[rollIndex] + rolls[rollIndex + 1];
}

/**
 * @brief Calculates the spare bonus for the current frame.
 * @param rollIndex The current roll index.
 * @param rolls The vector of all rolls.
 * @return The spare bonus.
 */
int Frame::spareBonus(int rollIndex, const std::vector<int>& rolls) {
  return rolls[rollIndex + 2];
}

/**
 * @brief Calculates the strike bonus for the current frame.
 * @param rollIndex The current roll index.
 * @param rolls The vector of all rolls.
 * @return The strike bonus.
 */
int Frame::strikeBonus(int rollIndex, const std::vector<int>& rolls) {
  return rolls[rollIndex + 1] + rolls[rollIndex + 2];
}
