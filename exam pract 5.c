#include<stdio.h>
int main()
{
    int i , n , count =0;
    printf("enter the  number :\n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("The number is positive");
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
                count++;
        }
        if(count==2)
            printf("\nThe number is prime number");
        else
            printf("\nThe number is not a prime number");
    }
    return 0 ;
}
