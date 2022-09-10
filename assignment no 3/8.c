// Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main()
{
    int x;
    printf("enter the year");
    scanf("%d",&x);
    if(x%4 && x%400)
    {
        printf("this is not leap year");

    }
    else
    {
        printf("this is leap year");
    }

}