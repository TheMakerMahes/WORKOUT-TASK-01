/*
If a Four Digit Number is input through the Keyboard,Write a Program obtain the sum 
of the first and last digit of this Number ?
*/
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,sum=0;
    printf("Enter the Four Digit Number : ");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    sum+=c;
    d=b/10;
    e=b%10;
    f=d/10;
    g=d%10;
    sum+=f;
    printf("Sum of the First and Last Digit Number is %d : %d",a,sum);

    return 0;
}
