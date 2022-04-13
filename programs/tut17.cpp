#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <array>
#include <vector>
#include <sstream>
#include <algorithm>

// user-defined functions prototypes
std::vector<std::string> StringToVector(std::string str, char sep);
std::string CaesarCipher(std::string str, int key, bool encrypt);

int main() {
    /*
     * Save a string >>> "Make me secret"
     * Letters are shifted by 5 left
     * Encrypted Hvfz hz nzxmzo
     * Decrypted "Make me secret"
     */
    std::string theString = "Make me secret";
    std::string encryptedStr = CaesarCipher(theString, 5, true);
    std::string decryptedStr = CaesarCipher(encryptedStr, 5, false);

    std::cout << "Encrypted: " << encryptedStr << std::endl;
    std::cout << "Decrypted: " << decryptedStr << std::endl;

    return 0;
}

std::vector<std::string> StringToVector(std::string str, char sep) {
    /*
     * Converts a given string to a vector by allocating string portion
     * into a vector position, delimited by a separator.
     *
     * Arguments
     *   > str <string> : the given string to convert
     *   > sep <char> : the character delimiting where to break the string
     *
     * Example
     *
     * The following piece of code
     *
     * vector<string> vecStr = StringToVector("some dummy text", ' ');
     * for (auto word : vecStr) {
     *   std::cout << word << std::endl;
     * }
     *
     * would output to the console
     *
     * ----------
     * some      |
     * dummy     |
     * text      |
     * ----------
     */

    std::vector<std::string> vecStr;
    std::stringstream ss(str);

    std::string indivStr;

    while (getline(ss, indivStr, sep))
    {
        vecStr.push_back(indivStr);
    }

    return vecStr;
}

std::string CaesarCipher(std::string str, int key, bool encrypt) {
    /*
     * Encrypts/Decrypts a given string by shifting its chars
     * `key` letters to the left based on the state of `encrypt`
     *
     * Arguments:
     */
    std::string returnStr = "";
    int charCode = 0;
    char letter;

    if (encrypt)
        key = key * -1;

    for (char &c : str) {
        if (isalpha(c)) {
            charCode = (int)c;
            charCode += key;

            if (isupper(c)) {
                if (charCode > (int)'Z')
                    charCode -= 26;
                else if (charCode < (int)'A')
                    charCode += 26;
            }
            else {
                if (charCode > (int)'z')
                    charCode -= 26;
                else if (charCode < (int)'a')
                    charCode += 26;
            }
            letter = charCode;
            returnStr += letter;
        }
        else {
            letter = c;
            returnStr += letter;
        }
    }
    
    return returnStr;
}