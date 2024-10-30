#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter Number:");
    scanf("%d",&num);
    for(int i=0;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("Sum is %d",sum);
}