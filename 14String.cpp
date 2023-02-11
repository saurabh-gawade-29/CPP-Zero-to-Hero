#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Basic
    string greeting = "Hello";
    cout << greeting << endl;

    // Concatination
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    cout << fullName << endl;

    // If you Add two int
    int x = 10;
    int y = 20;
    int z = x + y;
    cout << z << endl;

    // If You Add two String
    string u = "10";
    string v = "20";
    string w = u + w;
    cout << w << endl;

    /*
    !If you try to add a number to a string, an error occurs
    string x = "10";
    int y = 20;
    string z = x + y;
    */

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << endl;
    cout << "The length of the txt string is: " << txt.size() << endl;

    /*
    Tip: You might see some C++ programs that use the size() function to get the length of a string.
    This is just an alias of length(). It is completely up to you if you want to use length() or size():
    */

    string myString = "Hello";
    cout << myString[0];
    // Outputs H

    string myString1 = "Hello";
    myString1[0] = 'J';
    cout << myString1 << endl;
    // Outputs Jello instead of Hello

    // Special Char
    string txt1 = "It\'s alright.";
    cout << txt1 << endl;

    string txt2 = "Hello\nWorld!";
    cout << txt2 << endl;

    string txt3 = "Hello\tWorld!";
    cout << txt3 << endl;

    return 0;
}