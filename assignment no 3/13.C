// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if(x%3 && x%2){
        printf("Not divisible by 3 and 5");

    }
    else
    {
        printf("Divisible by 3 and 5");
    }
}