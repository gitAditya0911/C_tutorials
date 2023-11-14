#include<stdio.h>
int main()
{
    int num , rem, rev=0 , temp =0;
    printf("enter the number");
    scanf("%d",&num);
    temp= num;
    while(num>0)
    {
        rem = num%10;
        rev = rev*10 + rem ;
        num/=10 ;
    }
    if(temp == rev)
    {
        printf("the number is pallindrome");
    }
    else{
        printf("the number is not a paliindrome");
    }
    return 0;
}
