/* Write a program to check whether a given number is an even number or an odd 
number without using % operator.*/
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if((x & 1)==0)
    {
        printf("Number is even");
    }
    else
        printf("Number is odd");
}