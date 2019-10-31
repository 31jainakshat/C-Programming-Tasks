#include<stdio.h>
#include<math.h>
int main()
{
    int num,a,sum=0,temp,i=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        i++;
        temp=temp/10;
    }
    temp=num;
    while(temp>0)
    {
        a=temp%10;
        sum=sum+pow(a,i);
        temp=temp/10;
    }
    if(num==sum)
        printf("It is Armstrong no.");
    else
        printf("It is not a Armstrong no.");
    return 0;
}
