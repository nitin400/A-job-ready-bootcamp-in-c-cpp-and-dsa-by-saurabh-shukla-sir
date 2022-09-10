// 10. Write a program which takes the cost price and selling price of a product from the 
// user. Now calculate and print profit or loss percentage.

#include<stdio.h>
int main()
{
    int c,s,p,l;
    printf("Enter the cost price");
    scanf("%d",&c);

    printf("Enter the selling price");
    scanf("%d",&s);
    if(s>c)
    {
        p=((s-c)/c)*100;
        printf("profit percentage is %d",p);
    }
    else
    {
        l=((c-s)/c)*100;
    }
    return 0;
}