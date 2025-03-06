/*
If the Total selling Price of 15 items and the total Profit earned on them is input through 
the Keyboard,Write a Program to Find the Cost of Price of One Item ?
*/
#include<stdio.h>
int main()
{
    float item,tot,pro;
    item=15;
    printf("\nTotal Selling Price   : ");
    scanf("%f",&tot);
    printf("\nProfit Ammount        : ");
    scanf("%f",&pro);
    printf("\nTotal items Real Price: %.2f",(tot-pro));
    printf("\n\nOne item Price is    : %.2f",((tot-pro)/item));
}
