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

    char cString[] = {'A', ' ', 'S', 't', 'r', 'i', 'n', 'g', '\0'};

    cout << cString << endl;
    cout << "Array size: " << sizeof(cString) << endl;

    vector<string> strVec(10);

    string str("I'm a string");
    strVec[0] = str;
    cout << str.at(0) << endl;

    cout << str.front() << str.back() << endl;

    cout << "Length " << str.length() << endl;

    string str2(str);
    strVec[1] = str2;

    string str3(str, 4);
    strVec[2] = str3;

    string str4(5, 'x');
    strVec[3] = str4;

    strVec[4] = str.append(" and your not");
    str += " and your not";

    str.append(str, 34, 37);
    strVec[5] = str;

    str.erase(13, str.length() - 1);
    strVec[6] = str;

    for (auto y : strVec) {
        cout << y << endl;
    }

    if (str.find("string") != string::npos) {
        cout << "1st not " << str.find("find") << endl;
    }

    cout << "Substr " << str.substr(6, 6) << endl;

    reverse(str.begin(), str.end());
    cout << "Reverse " << str << endl;

    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
    cout << "Upper " << str2 << endl;

    // You can get the ascii code for a char by saving the char as an int or with (int)
    // a - z : 97 - 122
    // A - Z : 65 - 90

    char aChar = 'Z';
    int aInt = aChar;

    cout << "A code " << (int)'a' << endl;

    string strNum = to_string(1+2);
    cout << "String " << strNum << endl;

    // PROBLEM
    // Receive uppercase strings, hide their meaning by turning them into ascii code
    // After that, translate them into actual letters again

    string normalStr, secretStr = "";

    cout << "Enter your uppercase string (e.g. HOUSE): ";
    cin >> normalStr;

    // string auxStr(normalStr);

    // transform(normalStr.begin(), normalStr.end(), auxStr.begin(), ::toupper);

    // try {
    //     if (auxStr != normalStr) {
    //         throw runtime_error("The word you entered is not in uppercase.");
    //     } else {
            for (char c: normalStr) {
                secretStr += to_string((int) c - 23);
            }

            cout << "Secret string: " << secretStr << endl;

            normalStr = "";

            for (int i = 0; i < secretStr.length(); i += 2) {
                string sCharCode = "";
                sCharCode += secretStr[i];
                sCharCode += secretStr[i+1];

                int nCharCode = stoi(sCharCode);

                char chCharCode = nCharCode + 23;
                normalStr += chCharCode;
            }
        // }
    // }

    // catch (exception &e) {
    //     cout << "Error: " << e.what() << endl;
    // }

    cout << "Original string: " << normalStr << endl;

    return 0;
}