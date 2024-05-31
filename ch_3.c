#include <stdio.h>
#define pi 3.14
#define status 'C'

int main()
{
    int a, b;

    printf("This is c programming\n");

    printf("Enter the valur for a : ");
    scanf("%d", &a);

    printf("Enter the value for b : ");
    scanf("%d", &b);

    int c = a + b;
    printf("The sum of a and b is %d\n", c);
}
