#include<stdio.h>
int main()
{
int arr[6],sum;
int i  ;
printf("enter the marks in all subjects one by one :");
for(i=0;i<6;i++)
{
    scanf("%d",&arr[i]);
}
printf("marks in all subjects are :");
for(i=0;i<6;i++)
{
printf(" \n%d",arr[i]);
}
for(i=0;i<6;i++)
{
sum = sum +arr[i];
}
printf("\nTotal marks are :%d",sum);
int AVG=sum/6;
printf("\nAverage marks are :%d",AVG);
if (AVG>33)
{
    printf("\nPASS");
}
else
{
    printf("\nYOU ARE FAILED , BEST OF LUCK FOR NEXT TIME");
}
float Percentage=600/sum*100;
printf("\nYOUR PERCENTAGE :%f",Percentage);
return 0;
}
