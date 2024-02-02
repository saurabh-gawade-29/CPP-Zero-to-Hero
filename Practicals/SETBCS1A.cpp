/*
Write a program in C++ that
first initializes an array of given 10 sorted real numbers.
The program must verify whether a given element belongs this array or not,
using Binary Search technique.
The element (to be searched) is to be entered at the time of execution.
If the number is found,
the program should print its position in the array
otherwise it should print "The number is not found."
*/

#include <iostream>

using namespace std;

int binarySearch(double arr[], int left, int right, double key)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main()
{
    double sortedArray[10] = {1.2, 3.4, 5.6, 7.8, 9.0, 11.2, 13.4, 15.6, 17.8, 19.0};
    double searchElement;

    cout << "Enter the number to be searched: ";
    cin >> searchElement;

    int result = binarySearch(sortedArray, 0, 9, searchElement);

    if (result != -1)
    {
        cout << "The number is found at position " << result + 1 << " in the array." << endl;
    }
    else
    {
        cout << "The number is not found." << endl;
    }

    return 0;
}

/*
Certainly! Let's go through the step-by-step explanation of how the binary search works for finding the number 7.8 in the provided sorted array:

Initialize variables:

left is initially set to 0, representing the leftmost index of the array.
right is initially set to 9, representing the rightmost index of the array.
key is the number to be searched, which is 7.8 in this case.
First Iteration:

Calculate the middle index: mid = (left + right) / 2 = (0 + 9) / 2 = 4.
Compare the middle element sortedArray[4] with the search key (7.8):
sortedArray[4] is 9.0, which is greater than 7.8.
Since the middle element is greater than the search key, update right to mid - 1, i.e., right = 3.
Second Iteration:

Calculate the new middle index: mid = (left + right) / 2 = (0 + 3) / 2 = 1.
Compare the middle element sortedArray[1] with the search key (7.8):
sortedArray[1] is 3.4, which is less than 7.8.
Since the middle element is less than the search key, update left to mid + 1, i.e., left = 2.
Third Iteration:

Calculate the new middle index: mid = (left + right) / 2 = (2 + 3) / 2 = 2.
Compare the middle element sortedArray[2] with the search key (7.8):
sortedArray[2] is 5.6, which is less than 7.8.
Update left to mid + 1, i.e., left = 3.
Fourth Iteration:

Calculate the new middle index: mid = (left + right) / 2 = (3 + 3) / 2 = 3.
Compare the middle element sortedArray[3] with the search key (7.8):
sortedArray[3] is 7.8, which is equal to the search key.
The search is successful, and the index 3 is returned.
The binary search has found the number 7.8 at position 4 in the array. Keep in mind that binary search works efficiently for sorted arrays, as it eliminates half of the remaining elements in each iteration.

*/