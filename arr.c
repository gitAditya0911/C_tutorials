#include<stdio.h>
int main()
{
    int mynumbers[5] , i=0  ;
    printf("enter the numbers : \n");
    fflush(stdin);
    for ( i = 0; i < 5 ; i++)
    {

       scanf("\n%d",&mynumbers[i]);
    }
    printf("\nMYNUMBERS IN ARRAY ARE :");
for ( i = 5; i >= 0 ; i--)
{
    printf("\n  %d",mynumbers[i]);
}

    return 0;
}
