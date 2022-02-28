#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

int main(){
    // Accept input
    // Provide output
    // Store values
    // Execute code multiple times

    for(int i = 0; i <= 10; i++) {
        cout << i << endl;
    }

    int arr1[] = {1, 2, 3};
    int arrSize = sizeof(arr1)/sizeof(arr1[0]);

    for(int i = 0; i < arrSize; i++) {
        cout << arr1[i] << endl;
    }

    for(auto x: arr1) cout << x << endl;

    int num = 4;
    string isEven = ((num % 2) == 0) ? "Even" : "Odd";

    cout << "Even or Odd: " << isEven << endl;

    for(int i = 0; i <= 20; i++) {
        if((i % 2) != 0) cout << i << endl;
    }

    /*
    Your program will:
    1. Have the user enter their investment amount and expected interest (Initial investment + additional added at end of each year)
    2. Each year their investment will increase by their investment + their investment
    * the interest rate
    3. Print out their earnings after a 10 year period
    */

    float investment, interest, total;
    
    cout << "How much to invest: ";
    cin >> investment;
    
    total = investment;
    
    cout << "Interest rate: ";
    cin >> interest;

    interest = interest * .01;

    for(int i = 0; i < 10; i++) {
        total = total + investment + (total * interest);
    }

    cout << "Investment after 10 years: " << fixed << setprecision(2) << total << endl;

    return 0;
}