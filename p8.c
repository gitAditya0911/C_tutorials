#include <math.h>
int main()
{
    int math,biology,chemistry,IT,HISTORY,GEOGRAPHY;
    float sum,avg;

    printf("enter the marks in math");
    scanf("%d",&math);

     printf("enter the marks in biology");
    scanf("%d",&biology);

     printf("enter the marks in chemistry");
    scanf("%d",&chemistry);
    printf("enter the marks in IT");
    scanf("%d",&IT);

     printf("enter the marks in HISTORY");
    scanf("%d",&HISTORY);

     printf("enter the marks in GEOGRAPHY");
    scanf("%d",&GEOGRAPHY);

    sum=math+biology+chemistry+IT+HISTORY+GEOGRAPHY;
    avg=sum/6;
    printf("the percentage =%f",avg);



    return 0 ;
}
