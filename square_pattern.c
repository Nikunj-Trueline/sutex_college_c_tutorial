#include <stdio.h>

int main()
{

    // for (int i = 1; i <= 5; i++) // row = i
    // {
    //     for (int j = 1; j <= 5; j++) // column = j
    //     {
    //         if (i == 1 || i == 5 || j == 1 || j == 5)
    //         {
    //             printf("* ");
    //         }
    //         else
    //         {
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}