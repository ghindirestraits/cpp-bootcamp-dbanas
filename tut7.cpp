#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

int main() {

    // srand(time(NULL));

    // int randNum = rand() % 100;
    // int i = 1;

    // while(i != randNum){
    //     i += 1;
    // }

    // cout << "The random number is " << i << endl;

    // int j = 1;

    // while(j <= 20) {
    //     if((j % 2) == 0) {
    //         j += 1;
    //         continue;
    //     }
    //     if(j == 15) break;
        
    //     cout << j << endl;
    //     j += 1;
    // }

    // SAMPLE OUTPUT
    // How tall is the tree: 5
    //     #
    //    ###
    //   #####
    //  #######
    // #########
    //     #

    /*
    Tip 1: you should use a while loop and 3 for loops

    Tip 2: I know that this is the number of spaces and hashes for the tree
    4 - 1
    3 - 3
    2 - 5
    0 - 9
    Spaces before stump = spaces before top

    Tip 3: you will need to do the following in your program
    1. Decrement spaces by one each time through the loop
    2. Increment the hashes by 2 each time through the loop
    3. Save spaces to the stump by calculating tree height - 1
    4. Decrement from tree height until it equals 0
    5. Print spaces and them hashes for each row
    6. Print stump spaces and then 1 hash
    */

    // RESOLUTION

    int treeHeight;

    cout << "How tall is the tree: ";
    cin >> treeHeight;

    int spaces = treeHeight - 1;
    int hashes = 1;
    int stumpSpaces = treeHeight - 1;

    while(treeHeight != 0) {
        for(int k = 0; k < spaces; k++) {
            cout << " ";
        }
        for(int j = 0; j < hashes; j++) {
            cout << "#";
        }
        cout << endl;
        
        spaces -= 1;
        hashes += 2;
        treeHeight -= 1;
    }

    for(int m = 0; m < stumpSpaces; m++) {
        cout << " ";
    }
    cout << "#" << endl;

    return 0;
}