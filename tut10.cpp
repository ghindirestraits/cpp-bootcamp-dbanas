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

int main() {

    vector<int> vecRandoNums(2);
    
    vecRandoNums[0] = 10;
    vecRandoNums[1] = 20;

    vecRandoNums.push_back(30);
    cout << "Vector size: " << vecRandoNums.size() << endl;

    cout << "Last index: " << vecRandoNums[vecRandoNums.size() - 1] << endl;

    vector<int>::iterator it;
    
    it = find(vecRandoNums.begin(), vecRandoNums.end(), 20);

    cout << *it << endl;

    string sSentence = "This is a random string";
    vector<string> vecsWords;
    stringstream ss(sSentence);

    string sIndivStr;
    char cSpace = ' ';

    while (getline(ss, sIndivStr, cSpace)) {
        vecsWords.push_back(sIndivStr);
    }

    for (int i = 0; i < vecsWords.size(); i++) {
        cout << vecsWords[i] << endl;
    }

    // PROBLEM
    // Enter calculation: 10 - 6
    // 10.0 - 6.0 = 4.0

    string calculation = "";
    vector<string> vecsCalc;

    cout << "Enter calculation (ex. 5 + 6): " << endl;
    getline(cin, calculation);

    stringstream ss2(calculation);

    while (getline(ss2, sIndivStr, cSpace)) {
        vecsCalc.push_back(sIndivStr);
    }

    double a = stod(vecsCalc[0]);
    double b = stod(vecsCalc[2]);
    string operation = vecsCalc[1];

    if (operation == "+") {
        cout << a << " + " << b << " = " << a+b << endl;
    } else if (operation == "-") {
        cout << a << " - " << b << " = " << a-b << endl;
    } else if (operation == "*") {
        cout << a << " * " << b << " = " << a*b << endl;
    } else if (operation == "/") {
        cout << a << " / " << b << " = " << a/b << endl;
    } else {
        cout << "I really don't know what you're talking about...\n";
        cout << "Please enter only +, -, * or /" << endl;
    }

    return 0;
}