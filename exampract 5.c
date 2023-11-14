#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],sum[3][3],i,j;
    printf("enter the  value of 1st matrix\n");
    for ( i = 0; i<3; i++)
    for ( j = 0; j<3; j++)
    {
        fflush(stdin);
        scanf("%d",&a[3][3]);
    }
    printf("enter the  value of  2nd matrix\n");
    for ( i = 0; i<3; i++)
    for ( j = 0; j<3; j++)
    {
        scanf("%d",&b[3][3]);
    }
    printf("the sum of matrices :");
    for ( i = 0; i<3; i++)
    for ( j = 0; j<3; j++)
    {
       sum[i][j]=a[i][j]+b[i][j];
    }
    printf("%d",sum[i][j]);
    return 0;
}

