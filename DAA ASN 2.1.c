#include<stdio.h>
int main()
{
	int arr[10],i,n ;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the elements in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The Elements in array are : \n");
	for(i=0;i<n;i++)
	{
		printf("%5d",arr[i]);
	}
	printf("\nThe Elements in reverse are : \n");
	for(i=n-1;i>=0;i--)
	{
		printf("%5d",arr[i]);
	}
	return 0 ;
}
