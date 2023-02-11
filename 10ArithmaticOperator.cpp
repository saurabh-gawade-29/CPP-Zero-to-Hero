#include <iostream>
using namespace std;

int sum1 = 100 + 50;    // 150 (100 + 50)
int sum2 = sum1 + 250;  // 400 (150 + 250)
int sum3 = sum2 + sum2; // 800 (400 + 400)

int main()
{
    cout << sum1 << endl;
    cout << sum2 << endl;
    cout << sum3 << endl;
}
