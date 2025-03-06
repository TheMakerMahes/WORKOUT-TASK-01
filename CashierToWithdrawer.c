/*
A Cashier has Currency notes of denominations 10,50,100 if the Amount to be Withdrawn is input through 
the Keyboard in Hundreds Find the Total Number of currency Notes of each denominations the cashier will
have to give to the Withdrawer ?
*/
#include<stdio.h>
int main()
{
    int amt;
    printf("\nEnter the amount to Withdraw : ");
    scanf("%d",&amt);
    printf("\n Required notes of Rs 100 : %d",(amt/100));
    printf("\n Required notes of Rs 50  : %d",((amt%100)/50));
    printf("\n Required notes of Rs 10  : %d",(((amt%100)%50)/10));
    printf("\n Still Remaining Amount   : %d\n\n",(((amt%100)%50)%10));
}
