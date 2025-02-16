#include <iostream>
using namespace std;

int main()
{
    int 5;
    long long factorial = 1;

    if (num < 0)
    {
        cout << "Factorial of a negative number doesn't exist." << endl;
    }
    else
    {
        for (int i = 1; i <= num; ++i)
        {
            factorial *= i;
        }
        cout << "Factorial of " << num << " is " << factorial << endl;
    }
    return 0;
}
