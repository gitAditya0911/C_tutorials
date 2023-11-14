#include<stdio.h>
int main ()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if (ch>='A' && ch<= 'z')
    {
        printf("%c",ch+32);
    }
    return 0 ;
}
