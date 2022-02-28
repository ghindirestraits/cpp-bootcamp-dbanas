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
vector<int> FindSubstrIndexes(string str, string substr);
string ReplaceSubstr(string str, string oldSubStr, string newSubStr);

int main() {

    // PROBLEM 1
    // Find all index matches for a substring
    string sentence = "This thing, that thing, all things in the world";
    string subStr = "thing";

    cout << "Looking for the substring '" << subStr << "' ..." << endl;

    vector<int> vecIndexes = FindSubstrIndexes(sentence, subStr);

    cout << "For the given string:" << endl;
    cout << sentence << endl;
    cout << vecIndexes.size() << " matches were found!" << endl;
    cout << "Indexes are ";
    
    for (int ind: vecIndexes) {
        cout << ind << ", ";
    }

    cout << "\n\n####################################\n\n";

    // PROBLEM 2
    // Replace all substring matches
    string aString = "There's no such thing as pie, I love pie";
    string oldSubStr = "pie", newSubStr = "pizza";

    cout << "Given string: " << aString << endl;
    cout << "Shall replace substring '" << oldSubStr << "' for '" << newSubStr << "'" << endl;

    aString = ReplaceSubstr(aString, oldSubStr, newSubStr);

    cout << "After substring replacement: " << aString << endl;

    // characters functions
    char letterZ = 'z';
    char num3 = '3';
    char aSpace = ' ';

    cout << "Is z a letter or number? " << isalnum(letterZ) << endl;
    cout << "Is z a letter? " << isalpha(letterZ) << endl;
    cout << "Is z uppercase? " << isupper(letterZ) << endl;
    cout << "Is z lowercase? " << islower(letterZ) << endl;
    cout << "Is 3 a number? " << isdigit(num3) << endl;
    cout << "Is space a space? " << isspace(aSpace) << endl;

    return 0;
}

vector<int> FindSubstrIndexes(string str, string substr) {
    vector<int> vec;
    
    try {
        size_t found = str.find(substr);

        while (found != string::npos) {
            vec.push_back(found);
            found = str.find(substr, found + 1);
        }
        
        if (!vec.empty()) return vec;
        else {
            throw runtime_error("No matches for the given substring ");
        }
    }

    catch (exception &e) {
        cout << "Error: " << e.what() << "'" << substr << "'" << endl;
        exit(EXIT_FAILURE);
    }
}

// Banas' version of the substring replacement function
string ReplaceSubstr(string str, string oldSubStr, string newSubStr) {
    vector<int> indexes = FindSubstrIndexes(str, oldSubStr);

    cout << "Find " << indexes.size() << " matches for substring '" << oldSubStr << "'" << endl;

    int lengthDiff = newSubStr.size() - oldSubStr.size();
    int timesLooped = 0;

    for (auto index: indexes) {
        str.replace(index + (timesLooped * lengthDiff), oldSubStr.size(), newSubStr);
        timesLooped++;
    }
    
    return str;
}

// my own version of the substring replacement function
// string ReplaceSubstr(string str, string oldSubStr, string newSubStr) {
//     vector<int> indexes = FindSubstrIndexes(str, oldSubStr);

//     cout << "Find " << indexes.size() << " matches for substring '" << oldSubStr << "'" << endl;

//     size_t found = str.find(oldSubStr);
    
//     while (found != string::npos) {
//         str.replace(str.find(oldSubStr), oldSubStr.length(), newSubStr);
//         found = str.find(oldSubStr, found + 1);
//     }
    
//     return str;
// }