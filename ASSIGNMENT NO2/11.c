/*  . Write a program to input a number from the user and also input a digit. Append a 
digit in the number and print the resulting number.
*/

#include<stdio.h>
int main()
{
    int x;
    int digit;
    printf("Enter a number");
    scanf("%d",&x);
    
    printf("enter the digit");
    scanf("%d",&digit);
    x=(x*10 + digit);
    printf("%d",x);
    
}