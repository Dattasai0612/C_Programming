#include<stdio.h>
int main()
{
    int a[5];
    printf("Enter array elements:");
    for(int i=0;i<5;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("Array element at index %d is: %d\n",i,a[i]);
    }
    return 0;
}