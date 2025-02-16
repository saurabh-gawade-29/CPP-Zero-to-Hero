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
    for (int i = rows; i >= 1; i--)
    {
        // Printing spaces
        for (int j = rows; j > i; j--)
        {
            cout << " ";
        }
        // Printing stars
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
