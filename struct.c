#include<stdio.h>
int main()
{
    int arr[5][5],r=2,c=2,i,j;
    printf("enter the values in matrix");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
    {
        scanf("%d",&arr[i][j]);
    }
        for(i=0;i<r;i++)
        for(j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
}
