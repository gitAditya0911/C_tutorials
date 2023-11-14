#include<stdio.h>
int linearsrch(int [],int,int);
int main()
{
	int arr[10],i,n,x ,f;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter The elements in array :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the elements you are searching for \n");
	scanf("%d",&x);
	f = linearsrch(arr,n,x);
	return 0;
}
int linearsrch(int arr [] , int n , int x )
{
	int f=0,i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			printf("Element Found at : %d \n ",i+1);
			f++;
		}
}
if(f==0)
	printf("Element Not Found\n");
}
