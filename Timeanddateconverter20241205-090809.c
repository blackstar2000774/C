#include <stdio.h>
void main ()
{
int seconds, remseconds;
int hours, minutes; 
printf("Enter no. of seconds: \n");
scanf("%d",&seconds);
hours=seconds/3600;
remseconds=seconds%3600;
minutes =remseconds/60;
seconds=remseconds%60;
printf("Hours:%d Minutes:%d Seconds: %d",hours,minutes,seconds);
int days, remdays;
int years, months;
printf("Enter the number of days: \n");
scanf("%d",&days);
years=days/360;
remdays=days%360;
months=remdays/30;
days=remdays%30;
printf("Years:%d Months: %d days:%d", years,months,days);
printf("Done \n");
}