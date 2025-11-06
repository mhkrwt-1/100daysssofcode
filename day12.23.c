/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/
#include <stdio.h>
int main()
{
      int late,fine=0;
      printf("Enter number of days:");
      scanf("%d",&late);
      if(late<=5)
      {
        fine=late*2;
      }
      else if(late>5 && late<=10)
      {
        fine=(5*2)+((late-5)*4);
      }
      else if(late>10 && late<=30)
      {
        fine=(5*2)+(5*4)+((late-10)*6);
      }
      else if(late>30)
      {
        printf("MEMBERSHIP CANCELLED!!!");
      }
      if(fine!=0)
      {
          printf("Fine caculated=%d",fine);
      }
 }