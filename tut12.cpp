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
void AssignAge3(int* pAge);
void DouleArray(int* arr, int size);

int main() {

    int age = 43;
    int* pAge = NULL;
    pAge = &age;

    cout << "Address: " << pAge << endl;
    cout << "Value at address: " << *pAge << endl;

    int intArray[] = {1, 2, 3, 4};
    int* pIntArray = intArray;

    cout << "1st " << *pIntArray << " Address" << pIntArray << endl;
    pIntArray++;
    cout << "2nd " << *pIntArray << " Address" << pIntArray << endl;
    pIntArray--;
    cout << "1st " << *pIntArray << " Address" << pIntArray << endl;

    AssignAge3(&age);
    cout << "Pointer age: " << age << endl;

    int arr[] = {1, 2, 3, 4};
    DouleArray(arr, 4);
    for (int i = 0; i < 4; i++) {
        cout << "Array: " << arr[i] << endl;
    }

    return 0;
}

void AssignAge3(int* pAge) {
    *pAge = 22;
}

void DouleArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;
    }
}