#include<stdio.h>
int main()
{
    float phy,chem,math;
    float sum=0,avg=0;
    scanf("%f",&phy);
    scanf("%f",&chem);
    scanf("%f",&math);
    sum=phy+chem+math;
    printf("Sum is %f\n",sum);
    avg=sum/3;
    printf("Average is %f",avg);
    return 0;
}
