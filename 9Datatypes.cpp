#include <iostream>
using namespace std;

int main()
{
    int myNum1 = 1000;
    cout << myNum1 << endl;

    float myNum2 = 5.75;
    cout << myNum2 << endl;

    double myNum3 = 19.99;
    cout << myNum3;

    /*
    TODO: float vs. double
    *The precision of a floating point value indicates how many digits the value can have after the decimal point.
    *The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits.
    *Therefore it is safer to use double for most calculations.
    */

    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << endl; // Outputs 1 (true)
    cout << isFishTasty << endl; // Outputs 0 (false)

    char myGrade = 'B';
    cout << myGrade << endl;

    string greeting = "Hello";
    cout << greeting << endl;
}