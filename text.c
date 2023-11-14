#include<stdio.h>
void checkeven(int a)
{
    int rem=a%2;
    if(rem==0)
    {
        printf("\nEVEN");
    }
    else 
    {
         printf("\nODD");
    }

}
int main()
{
    int a;
    printf("entr the value of a :\n");
    scanf("\n %d",&a);
    checkeven(a);
    return 0;
}
