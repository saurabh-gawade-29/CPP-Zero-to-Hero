//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *
#include <iostream>
using namespace std;

int main()
{
    int rows = 5;

    // Upper half of the diamond (pyramid)
    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j < rows; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the diamond (inverted pyramid)
    for (int i = rows - 1; i >= 1; i--)
    {
        for (int j = rows; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
