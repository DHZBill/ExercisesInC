/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

/* Returns the pointer of an array
*/
int *foo() {
    int i;
    int array[SIZE];

    printf("%p\n", array); /* prints the address of the pointer */

    for (i=0; i<SIZE; i++) {
	array[i] = 42; /* Sets the value of each element as 42 */
    }
    return array;
}

/* Sets the value of each element in the array as its index
*/
void bar() {
    int i;
    int array[SIZE];

    printf("%p\n", array); /* Prints the address of the pointer */

    for (i=0; i<SIZE; i++) {
	array[i] = i;
    }
}

/* Prints out the content of the array
   The output should be 42 42 42 42 42 (or 0 1 2 3 4 if bar() is 
   intended to modify the array in foo()) if the program worked as expected.
*/
int main()
{
    int i;
    int *array = foo(); /* Here we assigned array to a pointer returned in foo().
                            The array in foo() should be destroyed after the function ends.
                            So array is only a pointer and refer to nothing here.
                        */  
    bar();

    for (i=0; i<SIZE; i++) {
	printf("%d\n", array[i]);
    }

    return 0;
}

/* Q2.
    When compiling the program, I do get a warning says:
    
    "address of stack memory associated with local variable
    'array' returned [-Wreturn-stack-address]
    return array;"

    which means we assigned a memory address to a local variable, which is not expected.

    Q3.
    I got the following output: 

    0
    1243701271
    0
    0
    0
    
    The output is different from my teammates' because I'm running on Mac. They got segmentation fault.
    Explanations is commented in main()
*/
