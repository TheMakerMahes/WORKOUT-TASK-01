/*
Temperature of a City in Fahrenheit Degree is input through the Keyboard.
Write a Program to convert this Temperature into centigrate Degrees?
*/
#include<stdio.h>

int main()
{
    float temp,cel;
    printf("Enter the Temperature of the City : ");
    scanf("%f",&temp);
    cel=(temp-32)*5/9;
    printf("celsius degree ; %0.2f",cel);

    return 0;
}
