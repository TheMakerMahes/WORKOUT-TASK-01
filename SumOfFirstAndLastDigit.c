/*
SumOfFirstAndLastDigit.c
*/
/*
If a Four Digit Number is input through the Keyboard,Write a Program obtain the sum 
of the first and last digit of this Number ?
*/
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,sum=0;
    printf("Enter the Four Digit Number : ");
    scanf("%d",&a);//1234
    b=a/10;//123
    c=a%10;//4
    sum+=c;//4
    d=b/10;//12
    e=b%10;//3
    f=d/10;//1
    g=d%10;//2
    sum+=f;
    printf("Sum of the First and Last Digit Number is %d : %d",a,sum);

    return 0;
}
