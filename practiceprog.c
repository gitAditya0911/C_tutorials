#include<stdio.h>
int main()
{
    int i , x;
    for(i=1;i<=50;i++)
    {
        if(i%5==0||i%7==0)
            continue;
        printf("%d",i);
    }
    return 0 ;
}
