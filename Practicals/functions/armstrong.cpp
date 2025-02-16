#include <iostream>
#include <cmath>
using namespace std;

/*
An Armstrong number is 
a number that equals the sum of its digits raised to the power of the number 
of digits. For example, 
153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153. 
*/

// Function to check if a number is Armstrong
bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int n = 0;

    // Find the number of digits in the number
    while (num != 0) {
        num /= 10;
        n++;
    }

    num = originalNum;

    // Calculate the sum of the powers of digits
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, n); // Raise each digit to the power of n
        num /= 10;
    }

    // Check if the sum is equal to the original number
    return sum == originalNum;
}

int main() {
    int num;

    // Input number
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is Armstrong
    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
