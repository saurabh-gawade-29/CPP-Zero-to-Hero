#include <iostream>
using namespace std;

int main()
{
    // Basic If
    if (20 > 18)
    {
        cout << "20 is greater than 18" << endl;
    }

    // If Test with Variable
    int x = 20;
    int y = 18;
    if (x > y)
    {
        cout << "x is greater than y" << endl;
    }

    // If - Else
    int time = 20;
    if (time < 18)
    {
        cout << "Good day." << endl;
    }
    else
    {
        cout << "Good evening." << endl;
    }

    // Nested if Else
    int time1 = 22;
    if (time1 < 10)
    {
        cout << "Good morning." << endl;
    }
    else if (time1 < 20)
    {
        cout << "Good day." << endl;
    }
    else
    {
        cout << "Good evening." << endl;
    }
default:
    cout << "Looking forward to the Weekend";
    // Outputs "Good evening."
    return 0;
}