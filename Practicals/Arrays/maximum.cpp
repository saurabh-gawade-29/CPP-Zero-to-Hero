#include <iostream>
using namespace std;

int main() {
    int n;

    // Input number of elements in the array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Input elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize the maximum element as the first element
    int maxElement = arr[0];

    // Loop through the array to find the maximum element
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    // Output the maximum element
    cout << "The maximum element in the array is: " << maxElement << endl;

    return 0;
}
