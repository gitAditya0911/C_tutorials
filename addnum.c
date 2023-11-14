#include<stdio.h>
#include<malloc.h>

int main(){
    int n,sum=0;
    printf("Enter The no. of Array:");
    scanf("%d",&n);
    int arr[]=malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }

    printf("%d",sum);   
}