#include<stdio.h>
int main()
{
    int a , b , c;
    printf("enter the values of a and b");
    scanf("%d %d",&a,&b);
    c = (a+b) - (a=b);
    printf("the values are : %d %d ",a,c);
    return 0 ;
}