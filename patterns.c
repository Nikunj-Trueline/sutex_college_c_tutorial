#include <stdio.h>

int main()
{

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int k = 4; k >= i; k--)
    //     {
    //         printf(" ");
    //     }

    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }

    //     printf("\n");
    // }

    // for (int i = 1; i <= 5; i++)
    // {

    //     for (int k = 1; k < i; k++)
    //     {
    //         printf(" ");
    //     }

    //     for (int j = 5; j >= i; j--)
    //     {
    //         printf("*");
    //     }

    //     printf("\n");
    // }

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 9; j++)
    //     {
    //         if (i + j == 6 || j - i == 4 || i == 5)
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf(" ");
    //         }
    //     }

    //     printf("\n");
    // }

    for (int i = 1; i <= 5; i++)
    {

        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}