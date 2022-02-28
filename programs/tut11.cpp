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
double AddNumbers(double a, double b);

void AssignAge(int age);

int AssignAge2(int age);

int main() {

    // double num1, num2;

    // cout << "Enter number 1: ";
    // cin >> num1;
    // cout << "Enter number 2: ";
    // cin >> num2;

    // cout << num1 << " + " << num2 << " = " << AddNumbers(num1, num2);

    int age = 43;
    cout << "New age: " << AssignAge2(age) << endl;

    return 0;
}

double AddNumbers(double a = 0, double b = 0) {
    return a + b;
}

void AssignAge(int age) {
    age = 24;
}

int AssignAge2(int age) {
    age = 24;
    return age;
}