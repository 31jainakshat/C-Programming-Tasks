#include<stdio.h>
int main()
{
    float f,c;
    int choice=0;
    printf("press 1 for Celsius to Fahrenheit. press 2 for Fahrenheit to Celsius. press 3 for Exit.");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter temperature in Celsius: ");
        scanf("%f",&c);
        f=(9*c)/5 + 32;
        printf("%f Celsius to Fahrenheit is %f",c,f);
        break;
        case 2:
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f",&f);
        c=(5*f)/9 - 32;
        printf("%f Fahrenheit to Celsius is %f",f,c);
        break;
    }
    return 0;
}
