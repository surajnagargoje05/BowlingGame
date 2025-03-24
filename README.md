# Bowling Game

## Overview
This project is a **Bowling Game** console application implemented in **C++**. It simulates a 10-frame bowling game where the user inputs the number of pins knocked down for each roll. The final score is calculated according to standard bowling rules.

## Features
- Supports strikes and spares with appropriate bonus points.
- Allows an extra roll in the 10th frame if a strike or spare is scored.
- Interactive console-based gameplay.
- Infinite game loop until the user decides to exit.

## Project Structure
```
├── BowlingGame.h
├── BowlingGame.cpp
├── Frame.h
├── Frame.cpp
├── main.cpp
├── CMakeLists.txt
├── README.md
```

## Compilation
This project uses **CMake** for building the executable.

### Requirements
- **CMake 3.10 or later**

### Build Instructions
```bash
# Create build directory
mkdir build
cd build

# Run CMake to generate build system
cmake ..

# Compile the project
make
```

## Execution
To run the application after successful compilation:
```bash
./BowlingGame
```

## Usage
1. Enter the number of pins knocked down for each roll.
2. The program continues for 10 frames.
3. In the 10th frame, an extra roll is allowed if a strike or spare is scored.
4. The game runs in an infinite loop until you choose to exit.

## Example
```
--- Bowling Game ---

Frame 1 - Enter pins for first roll: 10
Frame 2 - Enter pins for first roll: 4
Frame 2 - Enter pins for second roll: 5
...
Total Score: 120

Do you want to play again? (y/n): n
```

## Author
Developed by Suraj Nagargoje
