#include "WordScramble.h"
#include <iostream>

using namespace std;

WordScramble::WordScramble() : Game("Word Scramble")
{
}

void WordScramble::play()
{
    int choice = rand() % 3;

    string scrambled;
    string answer;

    if (choice == 0)
    {
        scrambled = "retupmoc";
        answer = "computer";
    }
    else if (choice == 1)
    {
        scrambled = "gnimmargorp";
        answer = "programming";
    }
    else
    {
        scrambled = "rehcaet";
        answer = "teacher";
    }

    string userAnswer;

    cout << "\n====================================";
    cout << "\n         WORD SCRAMBLE";
    cout << "\n====================================\n";

    cout << "Unscramble This Word:\n";
    cout << scrambled << endl;

    cout << "\nYour Answer: ";
    cin >> userAnswer;

    if (userAnswer == answer)
        cout << "\nCorrect!\n";
    else
        cout << "\nWrong! Correct word was: " << answer << endl;
}