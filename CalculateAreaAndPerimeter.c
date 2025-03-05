/*
The Legth and breath of a rectangular and radius of a circle are input through the keyboard.
Write Program to Calculate the area and perimeter of a rectangular, and the area ,perimeter of the cilcle?
*/
#include<stdio.h>

int main()
{
    float l,b,r;
    printf("Enter the lenght of the Rectangular  : ");
    scanf("%f",&l);
    printf("Enter the breadth of the Rectangular : ");
    scanf("%f",&b);
    printf("Enter the radius of the circle       : ");
    scanf("%f",&r);
    float area,perimeter,area2,perimeter2;
    area=l*b;
    perimeter=2*(l+b);
    area2=3.14*r*r;
    perimeter2=2*3.14*r;
    printf("\n\tRectangular area      : %.2f",area);
    printf("\n\tRectangular perimeter : %.2f",perimeter);
    printf("\n\tcircle area           : %.2f",area2);
    printf("\n\tcircle perimeter      : %.2f",perimeter2);

    return 0;

}
