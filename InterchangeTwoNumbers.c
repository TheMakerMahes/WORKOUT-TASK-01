/*
Two Numbers are input through the Keyboard into Two Locations C and D.
Write a Program to interchange the Contents to C and D ?
*/
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the First Number (C)  : ");
    scanf("%d",&a);
    printf("Enter the Second Number (D) : ");
    scanf("%d",&b);
    c=b;
    d=a;
    printf("\nC : %d",c);
    printf("\nD : %d",d);
    return 0;
}
