/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // Declaring the array 
    int arr[] = {1, 2, 3, 4, 5, 6, 67};

    // Corrected printf format specifiers and added proper escaping for newlines
    printf("Value at position 3 of the array is %d\n", arr[3]);
    printf("The address of the first element of the array is %p\n", (void*)&arr[0]);
    printf("The address of the first element of the array is %p\n", (void*)&arr);
    printf("The address of the second element of the array is %p\n", (void*)&arr[1]);
    printf("The address of the second element of the array is %p\n", (void*)(arr + 1));
    printf("The address of the third element of the array is %p\n", (void*)&arr[2]);
    printf("The address of the third element of the array is %p\n", (void*)(arr + 2));
    
    printf("Value at position 3 of the array is %d\n", arr[3]);
    printf("The value of the first element of the array is %d\n", arr[0]);
    printf("The value of the first element of the array is %d\n", arr[0]);
    printf("The value of the first element of the array is %d\n", *(&arr[0]));
    printf("The value of the second element of the array is %d\n", arr[1]);
    printf("The value of the third element of the array is %d\n", arr[2]);
    printf("The value at the address of the second element of the array is %d\n", *(arr + 1));

    return 0;
}

