#include <iostream>

void pass_array(int array[])
{
    std::cout << "Size of passed array pointer: " << sizeof(array) << std::endl;
    std::cout << "Passed size of first element in the array pointer: " << sizeof(array[0]) << std::endl;
    std::cout << "Incorrect calculation of number of elements: " << sizeof(array)/sizeof(array[0])
              << std::endl;
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 7, 98, 0, 12, 35, 99, 14 };
    std::cout << "Before calling pass_array, size of array: " << sizeof(arr)/sizeof(arr[0]) << std::endl;
    pass_array(arr);
    return 0;
}