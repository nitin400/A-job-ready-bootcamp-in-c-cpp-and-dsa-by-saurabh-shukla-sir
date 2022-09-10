// 6. Write a program to calculate factorial of a number

#include<stdio.h>
int main()
{
    int fact=1,i,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("fact=%d",fact);
}