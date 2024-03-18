#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main()
{
    vector<string> Arr = {"Umbrella", "Shoes", "Towel", "Sunglasses", "Hat", "Swimsuit", "Backpack", "Gloves", "Scarf", "Jacket"};
    vector<string> Arr_Hints = {"In Rain", "On Foot", "Bath", "Protects from Sun", "Worn on head", "For swimming", "Carries items", "Keeps hands warm", "Worn around neck", "Keeps warm"};


    int lives = 3;
    srand(time(0));
    int randomIndex = rand() % 10;

    string wordToGuess = Arr[randomIndex];
    string hintToDisplay = Arr_Hints[randomIndex];
    string guessedLetters;

    cout << "Welcome to the Word Guessing Game!\n";
    cout << "Hint: " << hintToDisplay << endl;
    cout << "Word Length: " << wordToGuess.length() << endl;

    while (lives > 0) {
        string displayWord = "";
        for (char letter : wordToGuess) {
            if (guessedLetters.find(letter) != string::npos) {
                displayWord += letter;
            } else {
                displayWord += "_";
            }
        }

        cout << "Word to Guess: " << displayWord << endl;

        if (displayWord == wordToGuess) {
            cout << "Congratulations! You guessed the word: " << wordToGuess << endl;
            break;
        }

        string guess;
        cout << "Enter a letter or guess the word: ";
        cin >> guess;

        if (guess.length() == 1) {
            if (wordToGuess.find(guess) != string::npos) {
                cout << "Correct guess!\n";
                guessedLetters += guess;
            } else {
                cout << "Incorrect guess!\n";
                lives--;
                cout << "Lives left: " << lives << endl;
            }
        } else if (guess.length() == wordToGuess.length() && guess == wordToGuess) {
            cout << "Congratulations! You guessed the word: " << wordToGuess << endl;
            break;
        } else {
            cout << "Invalid guess!\n";
        }
    }

    if (lives == 0) {
        cout << "Sorry, you ran out of lives. The word was: " << wordToGuess << endl;
    }

    return 0;
}
