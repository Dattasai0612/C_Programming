#include<stdio.h>
int main()
{
    int arr1[5],arr2[5],sum_arr[5];

    for(int i=0;i<5;i++)
    {
        printf("Enter Elements in Array1:\n");
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("Enter Elements in Array2:\n");
        scanf("%d\n",&arr2[i]);
    }
    for(int i=0;i<5;i++)
    {
        sum_arr[i] = arr1[i]+arr2[i];
        printf("Sum Array at index %d is :%d\n",i,sum_arr[i]);
    }
    return 0;
}