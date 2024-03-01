
# Number Guessing Game💥
**Decleration:**

Develop a number guessing game where the
computer randomly selects a number, and the
player has to guess it. Provide hints like "too high"
or "too low" to help the player guess the correct
number


# Understanding the Task:😃

* **Random Number Generation**: The computer needs to generate a random number within a specified range (e.g., 1 to 100). C++ provides the `rand()` function for this purpose.

* **Player Input:** The player needs to enter their guess as a number. C++ uses `cin` for user input.

* **Comparison and Hints**: The program compares the player's guess with the generated random number. Based on the comparison, it provides hints like "too high" or "too low". Conditional statements (if, else if, else) are used for this logic.

* **Game Loop:** The program continues to prompt for guesses and provide hints until the player guesses the correct number. A loop (while or for) keeps the game running.

* **Ending the Game:** When the player guesses correctly, the program congratulates them and optionally displays the number of attempts it took.

# Explanation:🧡

* We include necessary libraries: iostream for input/output, `cstdlib` for random number generation, and ctime for seeding the random number generator.

* We define the guessing range using lowerBound and upperBound.
`srand(time(0))` seeds the random number generator with the current time, ensuring a different random number each time the program runs.

* `rand() % (upperBound - lowerBound + 1) + lowerBound` generates a random number within the specified range.

* We initialize variables for the player's guess (guess), number of attempt (`attempt`), and display welcome messages.

* The `while` loop keeps the game running until the player guesses the correct number.

* Inside the loop, the player is prompted for a guess, and the attempt count increases.

* Conditional statements (if, else if, else) check if the guess is too low, too high, or correct. Hints are provided accordingly.

* The loop continues until the guess matches the random number, at which point the game congratulates the player and shows the number of attempts.