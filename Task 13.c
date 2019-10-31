#include<stdio.h>
int main()
{
    int n,i,large,small;
    printf("Enter number of elements to insert in array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    large=small=a[0];
    for(i=1; i<n; i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }
        if(a[i]<small)
        {
            small=a[i];
        }
    }
    printf("Largest element is %d\n",large);
    printf("Smallest element is %d",small);
    return 0;
}
