#include <stdio.h>

// <mandatory label>
// <[optional label]>

// Declarations:
// variable declaration:
//<type> <variable> = <value>;

// variable read access:
// <function_call>(<variable>);
// show(myNumber);

// variable write access:
// <variable> = <value>;
// myNumber = 10;

// array declaration:
// <type> <array_variable>[<[size]>] = <value>;
// int myArray[4] = { 1, 2, 3, 4 };

// array read access:
// <variable> = <array_variable>[<index>];
// myNumber = myArray[2];

// array write access:
// <array_variable>[<index>] = <value>;
// myArray[2] = myNumber;

// Instructions:
// if:
// if (<condition>) <body>
// if (a > 10) {
//     printf("a is greater than 10\n");
// }

// for:
// for (<declarations>; <condition>; <increments>) <body>
// for (int i = 0; i < 10; i++) {
//     printf("%d\n", i);
// }

// Operators:
// arithmetic: add +, subtract -, multiply *, divide /, module %, unary -
// logical:    and &&, or ||, not !
// relational: equal ==, not equal !=, greater than >, less than <, greater or equal than >=, less or equal than <=

int main()
{
    // Declaring an array:

    // <type> <name>[<[size]>] <[= { element_0, element_1, ..., element_n }]>;
    // Examples:
    // An initialized array of type int with 10 elements.
    int nums1[] = {6, 5, 7, 1, 2, 3, 4, 9, 10, 8};

    // An uninitialized array of type int with 10 elements.
    int nums2[10];

    // Invalid, a size or an initializer is needed:
    // int numbers[];

    // Invalid, wrong size:
    // int numbers[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // Read access from an array:
    // <name>[<index>];
    // Examples:
    // Read the first element of the array nums1.
    printf("First element of the array nums1: %d\n", nums1[0]);

    printf("Even indices:\n");
    for (int i = 0; i < 10; i += 2)
    {
        printf("%d\n", nums1[i]);
    }
    printf("\n");

    printf("Even values:\n");
    for (int i = 0; i < 10; i++)
    {
        

        if (rest == 0)
        {
            printf("%d\n", nums1[i]);
        }
    }
    printf("\n");

    return 0;
}