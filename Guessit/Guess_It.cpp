#include "bits/stdc++.h"
using namespace std;

int Init_RandomNumber() {
    srand(time(0));
    return rand() % 100 + 1;
}

int getPlayerGuess() {
    int guess;
    cout << endl << "Enter your guess (1..100): ";
    cin >> guess;
    return guess;
}

void printAnswer(int guess, int secretNumber) {
    if (guess > secretNumber) {
        cout << "Your number is too big." << endl;
    } 
    else if (guess < secretNumber) {
        cout << "Your number is too small." << endl;
    } 
    else {
        cout << "Congratulation! You win." << endl;
    }
}

int main() {
    int secretNumber = Init_RandomNumber();
    int guess;

    do {
        guess = getPlayerGuess();
        printAnswer(guess, secretNumber);
    } while (guess != secretNumber);

    return 0;
}