#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number:");
    scanf("%d",&num);
    num = num ^ (1<<2);
    num = num ^ (1<<4);
    printf("Number after toggling 3rd and 5th bits:%d",num);
    return 0;
}