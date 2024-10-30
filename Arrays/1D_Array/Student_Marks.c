#include<stdio.h>
int main()
{
    int marks[5];
    float sum=0,avg;

    for(int i=0;i<5;i++)
    {
        printf("Enter Marks of Students %d:",i+1);
        scanf("%d",&marks[i]);
    }

    for(int i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("Sum of students: %f\n",sum);
    printf("Avg of students: %f",avg);
    return 0;
}