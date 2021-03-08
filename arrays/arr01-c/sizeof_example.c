#include <stdio.h>

void show_size(int array[]) {
    printf("In show_size(array):\n\n");

    size_t sizeOfArray = sizeof(array);
    size_t sizeOfArray0 = sizeof(array[0]);

    printf("sizeof(array): %zd\n", sizeOfArray);
    printf("sizeof(array[0]): %zd\n", sizeOfArray0);
    printf("sizeof(array) / sizeof(array[0]): %zd\n\n", sizeOfArray/sizeOfArray0);
}


int main(void) {
    printf("In main:\n\n");
    printf("sizeof(int *): %zd\n", sizeof(int *));
    printf("sizeof(int): %zd\n", sizeof(int));
    printf("\nDeclaring myArray with 12 elements\n\n");

    int myArray[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

    size_t sizeOfMyArray = sizeof(myArray);
    size_t sizeOfMyArray0 = sizeof(myArray[0]);

    printf("sizeof(myArray): %zd\n", sizeOfMyArray);
    printf("sizeof(myArray[0]): %zd\n", sizeOfMyArray0);
    printf("sizeof(myArray) / sizeof(myArray[0]): %zd\n", sizeOfMyArray/sizeOfMyArray0);

    printf("\nCalling show_size(myArray)\n\n");
    show_size(myArray);

    return 0;
}
