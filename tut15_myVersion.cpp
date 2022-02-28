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

int main() {

    // PROBLEM 1
    // Convert a string to a vector

    string originalStr = "";

    cout << "Enter a random string: ";
    cin >> originalStr;

    vector<string> vecStr;
    stringstream ss(originalStr);

    string indivStr;
    char space = ' ';

    while (getline(ss, indivStr, space)) {
        vecStr.push_back(indivStr);
    }

    cout << "[";

    for (int i = 0; i < vecStr.size(); i++) {
        cout << vecStr[i];
    }

    cout << "]" << endl;

    // PROBLEM 2
    // Convert a vector into a string
    originalStr = "";

    for (int i = 0; i < vecStr.size(); i++) {
        originalStr += vecStr[i];
    }

    cout << "[" << originalStr << "]" << endl;

    // PROBLEM 3
    // Trim whitespace from the front and back of a string
    // HINT: https://www.cplusplus.com/reference/string/string/

    originalStr = "";

    cout << "Enter a random string: ";
    cin >> originalStr;
    
    string strWithSpaces = "   " + originalStr + "   ";

    cout << "String with spaces: [" << strWithSpaces << "]" << endl;

    size_t found = strWithSpaces.find(" ");

    while (found != string::npos) {
        strWithSpaces.erase(found, 1);
        found = strWithSpaces.find(" ");
    }

    originalStr = "";
    originalStr = strWithSpaces;

    cout << "String without spaces: [" << originalStr << "]" << endl;

    return 0;
}