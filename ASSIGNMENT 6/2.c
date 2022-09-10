// 2. Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            sum=sum+i;

    }
    printf("%d",sum);
}