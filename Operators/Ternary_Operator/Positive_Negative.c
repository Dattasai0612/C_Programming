#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number:");
    scanf("%d",&num);
    if (num == 0)
    {
        printf("%d is Zero",num);
    }
    else
    {
        (num>0) ? printf("%d is Positive",num) : printf("%d is Negative",num);
    }
}