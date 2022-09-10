/* 8. Write a program to check whether the given number is even or odd using a bitwise 
operator */
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if ( x & 1)
    {
        printf("number is odd");

    }
    else{
        printf("number is even");
    }
}