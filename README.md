CalculatorV2

A console-based math practice program.
The goal of the program is to solve arithmetic problems for addition, subtraction, multiplication, and division using numbers from 1 to 10.

The project was made to practice loops, conditionals, user input handling, and working with arithmetic operations in C++.

---------------------------------

How the program works

The program runs four sections: addition, subtraction, multiplication, and division.

For each section, the program loops through numbers from 1 to 10 and displays a math operation for the user to solve.
The user must enter the correct answer to continue to the next problem.

If the answer is wrong, the program asks the user to try again until the correct answer is entered.
After completing all problems in a section, the program moves on to the next one.

For division, floating-point answers are compared using a small tolerance to account for decimal precision.

--------------------------------------

Concepts used

cin and cout (input and output)
Variables
for loops and nested loops
while loops
if logic through comparisons
Floating-point comparison using fabs()
Basic arithmetic operations

------------------------------------

How to compile and run

Make sure you have a C++ compiler installed (like g++).

Compile:

g++ main.cpp -o calculator_v2


Run:

./calculator_v2

---------------------------

Example output

3+4=

7

---------------

You did it!

---------------

5/2=

2.5

---------------

You did it!

---------------

Purpose

This project was created as a beginner exercise to reinforce loop logic, repeated input validation, and arithmetic operations in C++ through practice-style problems.

-------------------------

Improvements

Will be added soon, such as:
skipping sections, difficulty levels, score tracking, time limits, etc
