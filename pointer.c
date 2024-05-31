/*

Pointer :
     It is one kind of variable which store the address of the another variable.

   - dynamically memoery allocation.


*/

#include <stdio.h>

int main()
{
    //  variable declaration with intilization.
    int a = 10;

    // pointer declaration
    int *ptr;

    ptr = &a;

    printf("%d\n", a);  // 10
    printf("%p\n", &a); // 987678
    printf("%p\n", ptr);
    printf("%d\n", &ptr);
    printf("%d\n", *ptr); // 10

    int **b;
    b = &ptr;

    printf("%d\n", b);
    printf("%d\n", **b);

    printf("%d bytes.\n", sizeof(ptr));
    printf("%d bytes.\n", sizeof(b));

    int array[5] = {1, 2, 3, 4, 5};

    int *demo;

    demo = &array[2]; // demo = &array[0]

    printf("%d\n", *demo);

    //  demo++;
    demo--;

    printf("%d\n", *demo);

    int test[5] = {10, 20, 30, 40, 90};

    int *test1 = &test[1];
    int *test2 = &test[4];

    int cal = *test2 - *test1;

    printf("%d\n", cal);
}