#include<stdio.h>
int main()
{
    int arr[5],i,j,temp;
    printf("enter the values of array");
    for (i=0;i<5;i++)
    {
    scanf("%d",&arr[i]);
    }
   
    for(i=0;i<5;i++)
    {
        temp = arr[i];
        j = i - 1;
        while (i>=0 && arr[j]>arr[i])
        {
          arr[j+1] = arr[j];
          j--;  
        }
        arr[j+1]=temp;
    }
printf("%d",arr[i]);

}
