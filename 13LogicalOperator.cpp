#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = 3;
    cout << (x > 3 && x < 10) << endl;    // returns true (1) because 5 is greater than 3 AND 5 is less than 10
    cout << (x > 3 || x < 4) << endl;     // returns true (1) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4)
    cout << (!(x > 3 && x < 10)) << endl; // returns false (0) because ! (not) is used to reverse the result
    return 0;
}
