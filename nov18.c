/*
Operators in C:
1. Arithmetic Operators: +, -, *, /, %
2. Conditions/Conditional Operators/Relational Operators/Comparision Operators:
    <, <=, >, >=, ==, !=
    these will always return boolean
3. Logical Operators:
    logical and: &&
        a < b && a < c
    logical or: ||
        to register, user must provide either a mobile no or an email address.
        a < b || a < c
    logical not: !
4. Assignment Operators
*/
#include<stdio.h>

int main()
{
    int a, b, c;
    // printf("Enter a: ");
    // scanf("%d", &a);
    // printf("Enter b: ");
    // scanf("%d", &b);
    // printf("%d\n", 3 > 5);
    // printf("%d\n", 3 < 5);
    /*
    0: false
    non-zero : true
    a = 5? => a == 5

    a = b
     <--
    b = a
    a = 10

    suppose, a = 5 & b = 20
    // a = b   => a = 20, b = 20
    b = a   => a = 5, b = 5

    a != 5
    */
    // if (1){
    //     printf("if executed...\n");
    // }

    // printf("Program ended.");

    a = 5;
    b = 7;
    c = 6;
    printf("%d\n", a < b && a < c);
    return 0;
}