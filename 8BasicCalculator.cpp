#include <iostream>
using namespace std;

int num1;
int num2;
int sum;
int main()
{
    cout << "Enter Num 1: ";
    cin >> num1;

    cout << "Enter Num 2: ";
    cin >> num2;

    cout << "You Enter: " << num1 << " " << num2 << endl;
    sum = num1 + num2;
    cout << "Sum is: " << sum;
}