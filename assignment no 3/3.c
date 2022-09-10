/*  Write a program to check whether a given number is an even number or an odd 
number. */
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if(x%2)
    {
        printf("Number is odd");
    }
    else
        printf("Number is even");
}
