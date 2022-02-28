#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

int main(){

    cout << "abs(-10) = " << abs(-10) << endl;
    cout << "max(5, 4) = " << max(5, 4) << endl;
    cout << "min(5, 4) = " << min(5, 4) << endl;
    cout << "fmax(5.3, 4.3) = " << fmax(5.3, 4.3) << endl;
    cout << "fmin(5.3, 4.3) = " << fmin(5.3, 4.3) << endl;
    cout << "ceil(10.45) = " << ceil(10.45) << endl;
    cout << "floor(10.45) = " << floor(10.45) << endl;
    cout << "round(10.45) = " << round(10.45) << endl;
    cout << "pow(2, 3) = " << pow(2, 3) << endl;
    cout << "sqrt(100) = " << sqrt(100) << endl;
    cout << "sqrt(1000) = " << sqrt(1000) << endl;

    // e ^ 1
    cout << "exp(1) = " << exp(1) << endl;
    // 2 ^ 1
    cout << "exp2(1) = " << exp2(1) << endl;

    // e * e * e ~= 20
    cout << "log(20.079) = " << log(20.079) << endl;

    // 2 * 2 * 2 = 8
    cout << "log2(8) = " << log2(8) << endl;

    // SQRT(A^2 + B^2)
    cout << "hypot(2, 3) = " << hypot(2, 3) << endl;

    // Also sin, cos, tan, asin, acos, atan, atan2
    // sinh, cosh, tanh, asinh, acosh, atanh

    srand(time(NULL));

    // Generate values from 0 to 11 -> [0, 11)
    int secretNum = rand() % 11;

    cout << "Secret Number: " << secretNum << endl;


    return 0;
}