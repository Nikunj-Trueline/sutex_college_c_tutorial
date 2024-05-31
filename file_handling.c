/*

File Handling:

            - we can store our data for permenent time.(ROM)

Three operation with file.
1. read  - r
2. write  - w
3. upend  - a

file function

fprintf
fscanf

fgetc
fgets
fputc
fputs

File pointer
FILE *ptr;


*/

#include <stdio.h>

int main()
{

    char name[20];

    //  printf("Enter your name : ");
    // scanf("%s", name);
    //  gets(name);

    FILE *fptr;

    fptr = fopen("demo_file.txt", "r");

    //  printf();

    //  fprintf(fptr, "Your name is %s\n", name);

    char store[20];
    // fscanf(fptr, store, 20);

    printf("The data is %s\n", store);

    fclose(fptr);
}