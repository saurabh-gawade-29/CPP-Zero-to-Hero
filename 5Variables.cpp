#include <iostream>
using namespace std;

/*
    !Variables Naming Convetion
    1. Start With Letter or _
    2. Contains number but not on First Place
    3. Names are case sensitive
    4. Names cannot contain whitespaces or special characters like !, #, %, etc.
    5. Reserved words (like C++ keywords, such as int) cannot be used as names
*/

// TODO: Datatypes and Variable
int myNum = 5;            // Integer (whole number without decimals)
double myFloatNum = 5.99; // Floating point number (with decimals)
char myLetter = 'D';      // Character
string myText = "Hello";  // String (text)
bool myBoolean = true;    // Boolean (true or false)

// TODO: Concat With Hardcore String
int myAge = 35;

// TODO: Decalre Multiple Varibale
int x = 5, y = 6, z = 50;

int main()
{
    cout << myNum << endl;
    cout << myFloatNum << endl;
    cout << myLetter << endl;
    cout << myText << endl;
    cout << myBoolean << endl;
    // ! <<endl is for New Line

    cout << "I Am " << myAge << " Years Old";
}