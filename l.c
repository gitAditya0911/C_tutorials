#include <stdio.h>
int main()
{
int amt,x;
char ch;
switch(ch)
{
    case 'd':
    fflush(stdin);
    printf("Enter for deposit and widrawl");
    scanf("%c",&ch);
    switch(amt>=5000)
    {
        case 1:
    printf("Enter the deposit amount:");
    scanf("%d",&x);
    amt = amt+x;
    printf("Balance amt=%d",amt);
    break;
    }
}



}