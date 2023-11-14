#include <stdio.h>
int main()
{
     int a,b,c,d,e,f,g;
     float sum , percentage , average;
    printf("--------------------\n");
    printf("|enter the marks in a|");
    scanf("%d",&a);

     printf("|enter the marks in b|");
    scanf("%d",&b);

     printf("|enter the marks in c|");
    scanf("%d",&c);

     printf("|enter the marks in d|");
    scanf("%d",&d);

     printf("|enter the marks in e|");
    scanf("%d",&e);

     printf("|enter the marks in f|");
    scanf("%d",&f);

     printf("|enter the marks in g|");
    scanf("%d",&g);

    sum=a+b+c+d+e+f+g;
    average=a+b+c+d+e+f+g/6;
    printf("|the total is %f|",sum);
    printf("|the average is %f|",average);
    percentage=(sum/600)*100;
    printf("|the percentage is %f|",percentage);
    (percentage>=40)?printf("|you are pass|"):("|you are fail|");
    printf("----------------------------------\n");



    return 0 ;
}
