#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <array>

using namespace std;

int main() {

    int arrNums[10] = {1};
    int arrNums2[] = {1, 2, 3};
    int arrNums3[5] = {8, 9};

    cout << "1st value: " << arrNums3[0] << endl;

    arrNums3[0] = 7;
    cout << "1st value: " << arrNums3[0] << endl;

    cout << "Array size: " << sizeof(arrNums3) / sizeof(*arrNums3) << endl;

    for(auto x: arrNums2) cout << x << endl;

    int arrSize = sizeof(arrNums2) / sizeof(arrNums2[0]);
    for(int i = 0; i < arrSize; i++) {
        cout << arrNums2[i] << endl;
    }

    array<int,5> arrNums4 = {9, 8, 7, 6};
    for(auto j = arrNums4.begin(); j != arrNums4.end(); j++) {
        cout << *j << endl;
    }

    cout << "Size: " << arrNums4.size() << endl;
    cout << "Max Size: " << arrNums4.max_size() << endl;

    cout << "Empty: " << (arrNums4.empty() ? "Yes" : "No") << endl;

    cout << "1st: " << arrNums4[0] << endl;
    cout << "2nd: " << arrNums4.at(1) << endl;

    arrNums4.fill(5);

    array<int,5> arrNums5 = {9, 8, 7, 6};
    arrNums5.swap(arrNums4);
    for(auto x: arrNums5) cout << x << endl;

    int  arrNums6[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};

    cout << arrNums6[1][1][1] << endl;

    return 0;
}