#include<stdio.h>
void swap(int , int);
int main()
{
    int a , b;
    printf("\nenter the values of a and b");
    scanf("\n%d%d",&a,&b);
    printf("\nbefore swapping a = %d b = %d",a,b);
    swap(a,b);
    return 0 ;
}
void swap(int x , int y)
{
    int temp ;
    temp = x;
    x = y;
    y = temp ;
    printf("\nafter swapping a = %d b = %d",x,y);
}
