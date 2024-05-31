/*

Function :

     It is block of code which perform specific task.

     Two types of function existing in programming.

     1. library functions.
    ex. printf , scanf , main()

     2. user-define function.

     Three imporatnat thing in function.

     1. function declaration.
     2. function definantion
     3. function calling.

     user-define function.

     1. without parameter and without return value
     2. without parameter and with return value
     3. with parameter and without return value
     4. with parameter and with return values.


*/

#include <stdio.h>

// 1. without argument and without return value

// function definantion
void printmssg()
{
    printf("Hello world....");
}

// 2. without arguments and with return value

int input()
{

    int a;

    printf("Enter the value for a : ");
    scanf("%d", &a);

    return a;
}

// 3. with argument and without return value

void starprint(int rows, int columns)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// 4. with arguments and with return values.

int multiplication(int a, int b)
{
    return a * b;
}

int main()
{
    // function calling..
    // printmssg();

    // int store = input();
    // printf("%d", store);

    // starprint(5, 5);

    int mul = multiplication(10, 20);

    printf("Multiplication %d.", mul);
}