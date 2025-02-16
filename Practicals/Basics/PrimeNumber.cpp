//! a number that can be divided exactly only by itself and 1, for example 7, 17 and 41

#include <iostream>
using namespace std;

int main()
{
    int num;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1)
    {
        cout << num << " is not prime." << endl;
    }
    else
    {
        for (int i = 2; i <= num / 2; ++i)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << num << " is prime." << endl;
        else
            cout << num << " is not prime." << endl;
    }
    return 0;
}
