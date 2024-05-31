#include <stdio.h>

union Employee
{
    int emp_id;
    float emp_salary;
    char emp_name[20];
};

int main()
{
    union Employee emp;

    printf("Size of union is %d bytes.", sizeof(emp));

    // printf("Enter your id : ");
    // scanf("%d", &emp.emp_id);
    // printf("Employee id is %d\n", emp.emp_id);

    // printf("Enter your salary : ");
    // scanf("%f", &emp.emp_salary);
    // printf("Employee salary is %.2f\n", emp.emp_salary);

    // printf("Enter your name : ");
    // scanf("%s", emp.emp_name);
    // printf("Employee name is %s\n", emp.emp_name);
}