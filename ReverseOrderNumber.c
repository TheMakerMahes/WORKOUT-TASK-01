/*
If a Five digit Number is input through the Keyboard,write a Program to Reverse 
the Number ?
*/
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    printf("Enter the five digit Number : ");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    d=b/10;
    e=b%10;
    f=d/10;
    g=d%10;
    h=f/10;
    i=f%10;
    j=(c*10000)+(e*1000)+(g*100)+(i*10)+h;
    printf("reverse order%d : %d",a,j);

    return 0;
}


 