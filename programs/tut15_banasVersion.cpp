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
vector<string> StringToVector(string str, char sep);
string VectorToString(vector<string> &vec, char sep);
string TrimWhitespace(string str);

int main() {

    // PROBLEM 1
    // Convert a string to a vector

    string originalStr = "This is a random string";
    vector<string> vec = StringToVector(originalStr, ' ');

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }

    // PROBLEM 2
    // Convert a vector into a string
    vector<string> vCusts(3);
    vCusts[0] = "Bob";
    vCusts[1] = "Sue";
    vCusts[2] = "Tom";

    string sCusts = VectorToString(vCusts, ' ');

    cout << sCusts << endl;

    // PROBLEM 3
    // Trim whitespace from the front and back of a string
    // HINT: https://www.cplusplus.com/reference/string/string/

    string aStr = "     Just some random words  ";

    cout << "String with spaces: [" << aStr << "]" << endl;
    
    aStr = TrimWhitespace(aStr);
    cout << "String without spaces: [" << aStr << "]" << endl;

    return 0;
}

vector<string> StringToVector(string str, char sep) {
    vector<string> vecStr;
    stringstream ss(str);

    string indivStr;

    while (getline(ss, indivStr, sep)) {
        vecStr.push_back(indivStr);
    }

    return vecStr;
}

string VectorToString(vector<string> &vec, char sep) {
    string str = "";

    for (auto cust: vec) {
        str += cust + sep;
    }

    return str;
}

string TrimWhitespace(string str) {
    string whitespaces = (" \t\n\r\v\f");

    str.erase(str.find_last_not_of(whitespaces) + 1);
    str.erase(0, str.find_first_not_of(whitespaces));

    return str;
}