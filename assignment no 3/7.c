//  Write a program to check whether roots of a given quadratic equation are real & 
// distinct, real & equal or imaginary roots

#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the value of A");
    scanf("%d",&a);

    printf("enter the value of B");
    scanf("%d",&b);

    printf("enter the value of C");
    scanf("%d",&c);


    d=(b*b)-2*a*c;

    if(d<0){
        printf("ROOTS ARE UNEQUAL AND IMAGINARY");

    }

    if(d==0){
        printf("ROOTS REAL AND EQUAL");
        
    }

    if(d>0){
        printf("ROOTS REAL AND UNEQUAL");
        
    }

}