#include <stdio.h>
#define pi1 9.63

int main()
{

    int a = 10;
    const float pi = 3.14;
    // char status = 'Y';

    // pi1 = 6.90;

    /*

     status      email      _password
          var1      ab12
    */

    /*

    Integer      int         - whole number (Non-decimal )
    Floating point       float       - decimal number
    double           double          - decimal point value
    character          char          - single charcater


    */

    /*

    123  6578  11   787656    90  0   - int   - 4 byte
    9.78   9.0   65.676   3.14       - float        - 4 byte
    7.898767887  5.98079879   9.00011010   - double     - 8 byte
    'A'  'F'  'b'  '&'  '#'         - char      - 1 byte

    */

    /*
     Formate specifiers.

     int     - %d
     float   - %f
     double  - %lf
     char    - %c
    */

    // variable declaration.
    // datatype variable_name;
    int var1;
    float data;
    double CGPA;
    char status;

    // variable intilization.
    // varible_name = value;

    var1 = 78;
    data = 7.8;
    CGPA = 9.09;
    status = 'Y';

    // variable declaration with intilization.

    int test1 = 12;

    printf("The value of var1 is %d\n", var1);
    printf("The value of data is %.2f\n", data);
    printf("the value of CGPA is %lf\n", CGPA);
    printf("The value of status is %c\n", status);

    printf("The value of var1 and data is %d and %f\n", var1, data);
}