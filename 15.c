#include<stdio.h>
int main()
{
    int username;
    char password;
    printf("enter the username");
    scanf("%d",&username);
    switch (username)
    {
    case 1000:
    printf("correct username");
    printf("enter the password");
    scanf("%d",&password);
    switch (password)
    {
        case 500:
        printf("access garnted");
        break;
    default:
    printf("access denied");
    }
        break;
        default:
        printf("access denied");
    }
    return 0;
}
