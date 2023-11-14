#include <stdio.h>
int main()
{
int amt,x;
char ch;
 printf("Enter for money\n");
    scanf("%c",&ch);
     printf("Enter the deposit amount:\n");
    scanf("%d",&x);
switch(ch)
{
    case 'd':
   printf("it is the amount",ch);
    switch(amt>=5000)
    {
        case 5000:
   printf("the amount is 5000");
    amt = amt+x;
    printf("Balance amt=%d",amt);
    break;
    }
}



}
