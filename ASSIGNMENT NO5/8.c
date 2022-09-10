// 8. Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
    int i,n;
    printf("print the upto what you want to be printed square of the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d=%d\n",i,i*i);
    }
}