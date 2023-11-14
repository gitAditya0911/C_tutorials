#include<stdio.h>
int main()
{
    int amt , x;
    char ch;
    printf("enter the amount");
    scanf("%d",&amt);

    switch (amt>=5000)
    {
    case 1:
        fflush(stdin);
        printf("enter d/w for deposit/withdraw");
        scanf("%c",&ch);
        switch(ch)
        {
        case 'd':
            printf("enter the deposit amount");
            scanf("%d",&x);
            amt=amt+x;
            printf("balance amt %d",amt);
            break;

            case'w':
            printf("enter the withdraw amount");
            scanf("%d",&x);
            amt=amt-x;
            printf("balance amt %d",amt);
            break;
        }
        break;
        case 0:
        printf("insufficient funds");

    }
    return 0;
}
