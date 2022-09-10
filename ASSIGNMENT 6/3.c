//3. Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%2)
        {
            sum=sum+i;
        }
    }
    printf("sum is %d",sum);
}