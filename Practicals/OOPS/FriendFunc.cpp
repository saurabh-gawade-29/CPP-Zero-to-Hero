#include <iostream>
using namespace std;

class Box {
private:
    float length, width, height;

public:
    Box(float l, float w, float h) : length(l), width(w), height(h) {}

    friend float calculateVolume(Box b);
};

float calculateVolume(Box b) {
    return b.length * b.width * b.height;
}

int main() {
    Box b1(3.5, 4.0, 2.0);
    cout << "Volume of the box: " << calculateVolume(b1) << endl;
    return 0;
}
