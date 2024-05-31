#include <stdio.h>

// call by value

void callbyvalue(int a)
{
    a = 20;
}

// call by refrence

void callbyref(int *b)
{
    *b = 20;
}

int main()
{

    // call by value

    int x = 10;

    printf("The value of before call by value %d\n", x); // 10
    callbyvalue(x);
    printf("The value of after call by value %d\n", x); // 20

    int y = 10;

    printf("The value of before call by ref  %d\n", y); // 10
    callbyref(&y);
    printf("The value of after call by value %d\n", y); // 20
}