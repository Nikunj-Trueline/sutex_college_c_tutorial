#include <stdio.h>
#define pi 3.14

#include <stdio.h>

void main()
{

    // Example of predefined macros

    printf("This is line no.: %d\n", __LINE__);    // 7
    printf("Name of this file: %s\n", __FILE__);   // macros.c
    printf("Current Date: %s\n", __DATE__);        // Jan 10 2022
    printf("Current Time: %s\n", __TIME__);        // 12:17:35
    printf("Compilation success: %d\n", __STDC__); // 1

    int a = 10;
    short int b = 20;
    long int c = 30;

    int x = 10;
    signed int y = -300;
    unsigned int z = 30;

    unsigned int check = -96;

    unsigned char c1 = '1';

    printf("%d", c1);

    printf("%d\n", check);
}
