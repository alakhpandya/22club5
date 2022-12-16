/*
4 Bytes = 32 bits - 1 for sign = 31: range
Datatypes in C:
                    size            format specifier
short int           2
int                 2 or 4          %d, %i
long int            4               %ld, %li
long long int       8               %lld, %lli

float               4               %f
double              8               %lf
long double         10,12 or 16     %Lf

char                1               %c


Operators in C:
1. Arithmetic Operators: +, -, *, /, %

*/
#include<stdio.h>

int main(){
    int a=15, b=4, c=10, d=20;

    // long long int c=6;
    // long double d=10;
    // printf("a = %d\n", a);
    
    // printf("c = %lld\n", c);
    // printf("d = %Lf\n\n", d);

    // printf("size of a = %d\n", sizeof(a));
    // printf("size of c = %d\n", sizeof(c));
    // printf("size of d = %d\n", sizeof(d));

    // printf("a + b = %d\n", a + b);
    // printf("a - b = %d\n", a - b);
    // printf("a * b = %d\n", a * b);
    // printf("a / b = %f\n", (float)a / b);
    // printf("a modulus b = %d\n", a % b);

    // printf("a = %d", a++);
    // b = ++a + b;
    b = a++ + b;
    printf("b = %d", b);
    printf("a = %d", a);

    return 0;
}