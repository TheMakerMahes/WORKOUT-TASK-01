/*
If a Five Digit Number is input Through the Keyboard , write a Program to Calculate the Sum of its digit ?
*/
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j=0;
    printf("Enter the five digit Number : ");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    j+=c;
    d=b/10;
    e=b%10;
    j+=e;
    f=d/10;
    g=d%10;
    j+=g;
    h=f/10;
    i=f%10;
    j+=i;
    printf("SUM : %d",j);

    return 0;
}

