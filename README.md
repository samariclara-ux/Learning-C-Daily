# Learning-C-Daily
# 🎮 C Programming: Multiple Choice Quiz Game

This is a console-based quiz application developed during *Day 3* of my #100DaysOfCode journey. The project focuses on handling user input, managing data with arrays, and implementing basic game logic in C.

## 🚀 Features
* *Dynamic Questions:* Uses 2D character arrays to store multiple-choice questions.
* *Input Validation:* Converts user input to uppercase to ensure the game is not case-sensitive.
* *Smart Input Handling:* Implemented a "magic space" in scanf to handle the C input buffer and avoid skipping questions.
* *Scoring System:* Tracks the player's performance and displays a final score out of 4.

## 🛠️ How to Run
1.  Ensure you have a C compiler installed (like GCC) or use an online compiler like OneCompiler.
2.  Copy the code from main.c.
3.  Compile and Run.
4.  Enter your answers (A, B, C, or D) when prompted!

## 💡 Lessons Learned
The biggest challenge today was the *Input Buffer*. I learned that scanf can sometimes leave a "newline" character in the memory, which causes the program to skip the next question. Adding a space before the format specifier (" %c") solved this perfectly