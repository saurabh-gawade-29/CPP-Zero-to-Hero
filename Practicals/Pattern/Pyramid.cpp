/*

    *
   ***
  *****
 *******
*********

*/

#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        // Printing spaces
        for (int j = i; j < rows; j++) {
            cout << " ";
        }
        // Printing stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
