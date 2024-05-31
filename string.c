#include <stdio.h>
#include <string.h>

int main()
{
    char demo1[10] = "Trueline";
    char demo2[10] = {'T', 'r', 'u', 'e', 'l', 'i', 'n', 'e', '\0'};
    char demo3[] = "Trueline";
    char demo4[] = {'T', 'r', 'u', 'e', 'l', 'i', 'n', 'e'};

    // printf("Enter a String : ");
    // scanf("%c", &demo);

    // printf("%c", demo);

    char input[10];

    printf("Enter the String : ");
    // scanf("%s", input);

    // printf("%s", input);

    // gets(input);

    // puts(input);

    // printf("%s", demo4);

    // for (int i = 0; input[i] != '\0'; i++)
    // {
    //     printf("%c", input[i]);
    // }

    /*
    length
    compare
    concranate
    copy
    */

    char name1[10] = "Hello";
    char name2[10] = "world";

    printf("The length of name1 is %d\n", strlen(name1));
    printf("String compare value %d\n", strcmp(name1, name2));
    printf("The string is %s\n", strcat(name1, name2));
    printf("After string copy string1 is %s\n", strcpy(name1, name2));
}