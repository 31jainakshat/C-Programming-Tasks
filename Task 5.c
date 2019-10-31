#include<stdio.h>
int main()
{
    int num,a,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num>0)
    {
        a=num%10;
        sum=sum*10+a;
        num=num/10;
    }
    printf("Reverse of number is %d",sum);
    return 0;
}
