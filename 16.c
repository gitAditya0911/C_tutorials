#include<stdio.h>
int main ()
{
    int a = 5;
    int b = 6;
    int c = a++ + b++ + ++a + b++ + ++a ;
    printf("the value of c %d",c);
    return 0 ;
}
