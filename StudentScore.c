/*
If The Mark Obtained by a Student in Five different Subjects are input through the Keyboard.
Find Out the Total marks and Percentage Marks Obtained by the Student Assume that the Maximum Marks 
That can be obtained by a Student in each Subjects is 100?
*/
#include<stdio.h>
int main()
{
    float tamil,eng,maths,sci,ss;
    printf("Enter the Tamil Mark          : ");
    scanf("%f",&tamil);
    printf("Enter the English Mark        : ");
    scanf("%f",&eng);
    printf("Enter the Mathematics Mark    : ");
    scanf("%f",&maths);
    printf("Enter the Science Mark        : ");
    scanf("%f",&sci);
    printf("Enter the Social Science Mark : ");
    scanf("%f",&ss);
    float ts,av;
    ts=tamil+eng+maths+sci+ss;
    av=(ts/500)*100;
    printf("Total score of the Student : %0.1f",ts);
    printf("\nAverage score of the Student : %0.1f",av);
    return 0;

}
