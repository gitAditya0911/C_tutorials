#include <stdio.h>
int i ;

int arr[5];

int sqaure (int sqr[5])
{
    return (arr[i]*arr[i]);
}
int main()
{
    for(i=0;i<5;i++)

    {
        scanf("%d",&arr[i]);
    }
    printf("the square are :");
    for (i=0;i<5;i++)
    {
    printf("\n%d",sqaure(arr[i]*arr[i]));
    }
    return 0;
}

