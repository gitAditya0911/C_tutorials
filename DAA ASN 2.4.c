#include<stdio.h>
int main()
{
	int arr[10],i,n,j,temp;
	printf("Enter the size of Array : \n");
	scanf("%d",&n);
	printf("Enter The elements in array :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp ;
			}
		}
	}
	printf("The sorted array is :\n");
	for(i=0;i<n;i++)
	{
		printf("%5d",arr[i]);
	}
	return 0;
}
	
