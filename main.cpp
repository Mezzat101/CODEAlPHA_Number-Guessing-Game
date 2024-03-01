#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for srand() seeding

using namespace std;

int main()
{
    srand(time(0)); // Seed the random number generator for better randomness

    // Define the guessing range (modify as needed)
    int LowerBound = 1;
    int HigherBound = 100;

    int guess, attempt = 0, highScore = LowerBound;
    // Generate a random number
    int randomNumber = rand() % (HigherBound - LowerBound + 1) + LowerBound;

    cout << "*********Welcome to the Number Guessing Game |^_^|********** " << endl;
    cout << "I'm thinking of a number between " << LowerBound << " and " << HigherBound << "." << endl;

    while (guess != randomNumber)
    {
        cout << "Take a guess: ";
        cin >> guess;
        attempt++;

        if (guess < randomNumber)
        {
            cout << "Too low! Try again." << endl;
        }
        else if (guess > randomNumber)
        {
            cout << "Too high! Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number in " << attempt << " attempts!" << endl;
        }
    }
}