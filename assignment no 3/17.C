// 17. Write a program which takes the length of the sides of a triangle as an input. Display 
// whether the triangle is valid or not. 
#include<stdio.h>
int main()
{
    int l1,l2,l3;
    printf("Enter the side l1 length of the  triangle ");
    scanf("%d",&l1);

    printf("Enter the side l2 length of the  triangle ");
    scanf("%d",&l2);

    printf("Enter the side l3 length of the  triangle ");
    scanf("%d",&l3);

    if(l3>=(l1+l2))
    {
        printf("VALID TRIANGLE");

    }
    else
    {
        printf("INVALID TRAINGLE");
    }
}