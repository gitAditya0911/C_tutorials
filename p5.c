#include<stdio.h>
int swap (int a , int b)
{
return (a+b)-(a=b);
}
int main ()
{
    int a ,b ;

    printf("enter the a value");
    scanf("%d",&a);
    printf("enter the b value");
    scanf("%d",&b);

    swap(a,b);

    printf("the third value is %d %d",a,b);



    return 0;
}
