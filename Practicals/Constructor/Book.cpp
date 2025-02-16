#include <iostream>
using namespace std;

class Book {
private:
    string title;
    float price;

public:
    // Constructor
    Book(string t, float p) {
        title = t;
        price = p;
        cout << "Book '" << title << "' created!" << endl;
    }

    // Destructor
    ~Book() {
        cout << "Book '" << title << "' destroyed!" << endl;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Book b1("C++ Programming", 49.99);
    b1.display();
    return 0;
}
