// 4. Write a program to check whether a given number is divisible by 7 or divisible by 3
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if(x%7==0){
        printf(" divisible by 7");

    }
    else if(x%3==0)
    {
        printf("Divisible by 3");
    }
    else
    {
        printf("Not divisible by 3 or 5");
    }
}