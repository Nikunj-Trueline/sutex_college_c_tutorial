#include <stdio.h>

int main()
{

    // compile time intilization.
    // int array1[5] = {12, 58, 63, 99, 102};

    // array1[0] = 45;

    // printf("%d\n", array1[1]);

    int demo[5];

    // run time intilization

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value for demo[%d] : ", i);
        scanf("%d", &demo[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The value of demo[%d] is %d\n", i, demo[i]);
    }
}