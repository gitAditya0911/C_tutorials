#include<stdio.h>
int main()
{
    int n=20,i=1,sum=0;
    while(i<=n)
        {
        if(n%i==0)

            sum=sum+i;
            i++;

    }
    printf("sum=%d",sum);
}
