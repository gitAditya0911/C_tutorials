#include<stdio.h>
void arcrcl();
void arsqr();
void arrect();
int main()
{
    arcrcl();
    arsqr();
    arrect();
}
void arcrcl()
{
  int r;
  scanf("%d",&r);
  float pie=3.141;
  printf("the area of the circle is :  %f",pie*r*r);
}
void arsqr()
{
    int a ;
    scanf("%d",&a);
    printf("the area of a square :%d",a*a);
}
void arrect()
{
    int l,b;
    scanf("%d",&l);
    scanf("%d",&b);
    printf("the area of rectangle %d",l*b);
}