#include<stdio.h>
int main()
{
    char alpha;
    printf("enter the alphabet");
    scanf("%c",&alpha);

    if (alpha>=65 && alpha<=90)
    {
        printf("The alphabet in uppercase %c",alpha);
    }
    else if (alpha>=95 && alpha<=122)
    {
       printf("The alphabet in lowercase %c",alpha);
    }
    return 0;
}
