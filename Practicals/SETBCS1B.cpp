#include <iostream>

int main()
{
    // Initialize an array of five numbers
    short numbers[] = {10, 20, 30, 40, 50};

    // Get the size of the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Initialize a pointer to the start of the array
    short *ptr = numbers;

    // Print the starting address and size of the array
    std::cout << "Starting address of the array: " << static_cast<void *>(ptr) << std::endl;
    std::cout << "Size of each element (in bytes): " << sizeof(short) << std::endl;

    // Initialize a variable to store the sum
    short sum = 0;

    // Traverse the array with the pointer
    for (int i = 0; i < size; ++i)
    {
        /*
        static_cast<void*>(ptr) is used to cast the pointer ptr to a void* type before printing it. 
        This is done to print the address in a generic way without specifying the exact type of the pointer.
         A void* type is a generic pointer type in C++ that can hold the address of any data type.

        */
        // Print the pointer address and current sum
        std::cout << "Pointer address: " << static_cast<void *>(ptr) << ", Sum so far: " << sum << std::endl;

        // Add the current number to the sum
        sum += *ptr;

        // Move the pointer to the next element in the array
        ++ptr;
    }

    // Print the ending address and the final sum
    std::cout << "Ending address of the array: " << static_cast<void *>(ptr) << std::endl;
    std::cout << "Final sum: " << sum << std::endl;

    return 0;
}

/*

Let's break down the execution step by step:

Initialization:

numbers[] = {10, 20, 30, 40, 50}
size = 5
ptr points to the beginning of the numbers array.
Print Array Information:

Starting address: The address where the array begins.
Size of each element (in bytes): The size of a short in bytes.
Loop Execution:

Iteration 1:
Pointer address: Address of the first element.
Sum so far: 0 (Initial sum)
Increment pointer and add the first number (10) to the sum.
Iteration 2:
Pointer address: Address of the second element.
Sum so far: 10
Increment pointer and add the second number (20) to the sum.
Iteration 3:
Pointer address: Address of the third element.
Sum so far: 30
Increment pointer and add the third number (30) to the sum.
Iteration 4:
Pointer address: Address of the fourth element.
Sum so far: 60
Increment pointer and add the fourth number (40) to the sum.
Iteration 5:
Pointer address: Address of the fifth element.
Sum so far: 100
Increment pointer and add the fifth number (50) to the sum.
Print Ending Address and Final Sum:

Ending address: Address after the last element.
Final sum: Sum of all numbers in the array.
The output will consist of these details for each iteration of the loop, and you'll see the addresses, sizes, and sums printed on the console.
*/

/*
    !how to Calculate
    Let's take a look at how the size is calculated for the provided array:
    short numbers[] = {10, 20, 30, 40, 50};
    Here's the breakdown:
    sizeof(numbers): This gives the total size of the array in bytes. The numbers array is of type short, and there are 5 elements in it. The size of each short element is typically 2 bytes.
    So, sizeof(numbers) would be 5 elements * 2 bytes/element = 10 bytes.
    sizeof(numbers[0]): This gives the size of a single element in the array. Since the array is of type short, the size of a single short element is typically 2 bytes.
    So, sizeof(numbers[0]) would be 2 bytes.
    Now, let's calculate the size of the array dynamically:
    size = 10 bytes / 2 bytes/element = 5
    So, the calculated size (size) is 5, which represents the number of elements in the array numbers. This dynamic calculation ensures that if the size of the array changes, the code can adapt without manual adjustments.
*/