#include<stdio.h>
#include<conio.h>
int loc;                                		
int lower[10],upper[10];
void quick(int[],int,int);   		
int main()
 {
   int a[10],b,e,i,n;
   printf("\nEnter how many element U want to store in to the array:");
   scanf("%d",&n);
   printf("\nEnter the value to the array:");
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);
   if(n>1)
     {
       b=0;e=n-1;
       lower[0]=b;
       upper[0]=e;
       quick(a,b,e);                    		
       printf("\n\nAfter sorting the array is: \n\n");
       for(i=0;i<n;i++)      		
	printf("%d ",a[i]);
     }
   else
      printf("\n\nThe array has only one element.\n");
      
 }                                       	
void quick(int data[],int left,int right)
 {
   int b=left,e=right,temp,count;
   static int top=0;
   loc=left;
   while(left<right)
     {
       while((data[loc]<=data[right])&&(loc<right))
       right--;
       if(loc!=right)
	 {
	   if(data[loc]>data[right])
	     {
	       temp=data[loc];
	       data[loc]=data[right];
	       data[right]=temp;loc=right;
	     }
	 }
     while((data[left]<=data[loc])&&(left<loc))
      left++;
     if(loc!=left)
       {
	 if(data[left]>data[loc])
	   {
	     temp=data[loc];
	     data[loc]=data[left];
	     data[left]=temp;loc=left;
	   }
       }
     }
   if(top!=-1)
     {
      if(b<loc-1)
	 {
	   top++;
	   lower[top]=b;
	   upper[top]=loc-1;
	 }
   if((loc+1)<e)
	 {
	   top++;
	   lower[top]=loc+1;
	   upper[top]=e;
	 }
	b=lower[top];
	e=upper[top];
	top--;
	left=b;
	right=e;
	quick(data,left,right);			
     }
 }
