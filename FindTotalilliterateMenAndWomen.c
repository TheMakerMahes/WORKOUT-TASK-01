/* total population is 80000
total men is 52%
total literation is 48%
total literate men is 35%
to find total iliterate men and women?
*/
#include<stdio.h>
int main()
{
   int pop=80000,totlit,totmen,totwomen,totlitmen,totilitmen,totilitwomen;
   totlit=(48*pop)/100;
   totmen=(52*pop)/100;
   totwomen=(48*pop)/100;
   totlitmen=(35*pop)/100;
   totilitmen=pop-totlitmen;
   totilitwomen=totwomen-(totlit-totlitmen);
   printf("Total iliterate Men : %d Total iliterate Women : %d",totilitmen,totilitwomen);

    return 0;
}
