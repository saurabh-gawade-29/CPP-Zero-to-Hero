#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int first = 0, second = 1, next;

    cout << "Fibonacci sequence: ";

    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            cout << first << " ";
            continue;
        }
        if (i == 2)
        {
            cout << second << " ";
            continue;
        }
        next = first + second;
        first = second;
        second = next;

        cout << next << " ";
    }

    cout << endl;
    return 0;
}
