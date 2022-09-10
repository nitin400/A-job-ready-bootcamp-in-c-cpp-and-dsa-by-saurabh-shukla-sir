// 2. Write a program to print the first N natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d\n",(n+1)-i);
    }
}