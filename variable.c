#include<stdio.h>
void disp1();
void disp2();
void disp3();

int main()
{
disp1(); 
disp2();
disp3();
}
void disp1()
{
    int a , b ;
    printf("\nenter two values :");
    scanf("%d %d",&a,&b);
     printf("\ntwo values are : %d %d",a,b);

}
void disp2()
{
    float a, b;
    printf("\nenter two floats :");
    scanf("%f %f",&a,&b);
    printf("\ntwo  float values are : %f %f",a,b);
}
void disp3()
{
    char ch1 , ch2 ;
    printf("\nenter two characters :");
    fflush(stdin);
    scanf("%c",&ch1);
    scanf("%c",&ch2);
     printf("\ntwo characters  are : %c %c", ch1,ch2);
}
