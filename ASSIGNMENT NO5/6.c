// 6. Write a program to print the first N even natural numbers

#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%2==0){
            printf("%d\n",i);
        }
    }
}