/* 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
convert it into USD */

#include<stdio.h>
int main()
{
    int inr;
    float usd;
    printf("enter the amount in inr");
    scanf("%d",&inr);
    usd=inr/76.23;
    printf("The amount of %d in usd is %d",inr,usd);
}