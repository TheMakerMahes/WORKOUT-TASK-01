/*
Ramesh basic Salary is input through the Keyboard.His allowance is 40% of basic salary and 
house rent allowance is 20% of basic salary.Write a Program to Calculate his gross(total) salary?
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter your salary:");
    scanf("%d",&a);
    float b,c;
    b=a*0.4;
    c=a*0.2;
    float d;
    d=a+b+c;
    printf("\n%.2f",d);

    return 0;
}
