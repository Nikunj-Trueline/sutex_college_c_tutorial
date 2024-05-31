#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("demo.txt", "r");

    // fputc('H', fptr);

    // fputs("This is c programming", fptr);

    // char read = fgetc(fptr);

    char name[30];

    fgets(name, 30, fptr);

    printf("File data is %s\n", name);

    fclose(fptr);
}