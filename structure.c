/*

Structure :

            - user define datatype.
            - we can store multiple type of data and multiple data in single form.

  syntax:

    struct struct_name{
     // variable.
    };

*/

#include <stdio.h>
#include <string.h>

struct Employee
{
    int emp_id;
    float emp_salary;
    char emp_name[20];
};

int main()
{

    struct Employee emp[3];

    printf("Size of structure is %d bytes.", sizeof(emp));

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("Enter your id :");
    //     scanf("%d", &emp[i].emp_id);

    //     printf("Enter your salary : ");
    //     scanf("%f", &emp[i].emp_salary);

    //     printf("Enter your name : ");
    //     scanf("%s", emp[i].emp_name);
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("your name is %s\n", emp[i].emp_name);
    //     printf("your salary is %.2f\n", emp[i].emp_salary);
    //     printf("your id is %d\n", emp[i].emp_id);
    // }
}