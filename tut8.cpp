#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));

    int secretNum = rand() % 100;
    int guess = 0;

    // do {
    //     cout << "Guess the number: ";
    //     cin >> guess;
        
    //     if(guess > secretNum) cout << "Too big!" << endl;
    //     if(guess < secretNum) cout << "Too small!" << endl;
    // } while (secretNum != guess);

    while (true) {
        cout << "Guess the number: ";
        cin >> guess;

        if(guess > secretNum) cout << "Too big!" << endl;
        if(guess < secretNum) cout << "Too small!" << endl;

        if(secretNum == guess) break;
    }

    cout << "You guessed it!" << endl;
    
    return 0;
}