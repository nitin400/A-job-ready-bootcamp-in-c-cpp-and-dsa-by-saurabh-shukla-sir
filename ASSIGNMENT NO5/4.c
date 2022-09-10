// 4. Write a program to print the first N odd natural numbers
#include<stdio.h>
int main()
{
    int x,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(i%2)
            printf("%d\n",i);
        
    }
}