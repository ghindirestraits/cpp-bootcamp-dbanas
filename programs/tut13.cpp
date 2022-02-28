#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <array>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

// user-defined functions prototypes
vector<int> Range(int start, int max, int step);

int main() {

    vector<int> range = Range(1, 10, 2);

    for (auto y: range) {
        cout << y << endl;
    }


    // Exceptions are errors that occur when things don't go as expected
    // 1. You expect an int and get a string
    // 2. You expect a file to be available and it isn't
    // 3. You expect the user to not enter 0 and they do

    double num1 = 0, num2 = 0;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    try {
        if (num2 == 0) {
            throw "Division by zero is not possible";
        } else {
            cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
        }
    }

    catch (const char* exp) {
        cout << "Error: " << exp << endl;
    }

    try {
        cout << "Throwing exception" << endl;
        throw runtime_error("Error occurred");
        cout << "Can you print me?" << endl;
    }

    catch (exception &exp) {
        cout << "Handled exception: " << exp.what() << endl;
    }

    catch (...) {
        cout << "Default exception catch" << endl;
    }

    return 0;
}

vector<int> Range(int start, int max, int step) {
    int i = start;
    vector<int> range;

    while (i <= max) {
        range.push_back(i);
        i += step;
    }

    return range;
}