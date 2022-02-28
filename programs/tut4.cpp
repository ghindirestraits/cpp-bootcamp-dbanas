#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main() {
    // ----- CONDITIONAL OPERATORS -----
    // ==, !=, <, >, <=, >=

    // ----- LOGICAL OPERATORS -----
    // && : if both are true it returns true
    // || : if either are true it returns true
    // ! : converts true into false and vice versa

    // Is a birthday important?
    // 1 - 18, 21, 50, > 65

    string sAge = "0";

    cout << "Enter your age: ";
    cin >> sAge;

    int nAge = stoi(sAge);

    // if ((nAge >= 1) && (nAge <= 18)) {
    //     cout << "Important birthday\n";
    // } else if ((nAge == 21) || (nAge == 50)) {
    //     cout << "Important birthday\n";
    // } else if (nAge >= 65) {
    //     cout << "Important birthday\n";
    // } else {
    //     cout << "Not an important birthday\n";
    // }

    /*
    Determine School Grade
    > If 5 "Go to Kindergarten"
    > Ages 6 through 17 "Go to grades 1 through 12"
    > Age > 17 "Go to College"
    > Too young for school
    */

    if (nAge == 5) {
        cout << "Go to Kindergarten";
    } else if (nAge >= 6 && nAge <= 17) {
        cout << "Go to grade " << nAge - 5;
    }
    else if (nAge > 17) {
        cout << "Go to College";
    }
    else {
        cout << "Too young for school" << endl;
    }

    int age43 = 17;
    bool canIVote = (age43 >= 18) ? true : false;

    cout.setf(ios::boolalpha);
    cout << "Can Derek Vote: " << canIVote << endl;

    return 0;
}