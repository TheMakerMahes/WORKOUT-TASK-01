/*
The Distance Between Two Cities (in km) is input through the Keyboard.Write a Program to convert and print this 
Distance in meters,feet,inches and centimeters?
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km,cm,m,mm,inch,feet;
    printf("Enter the distence between two cities in kilometer : ");
    scanf("%f",&km);
    cm=km*100000;
    m=km*1000;
    mm=km*1000000;
    inch=km*39370.1;
    feet=km*3280.84;
    printf("%0.2f centimeter : ",cm);
    printf("%0.2f meter : ",m);
    printf("%0.2f millimeter : ",mm);
    printf("%0.2f inches : ",inch);
    printf("%0.2f feet : ",feet);

    return 0;
}
