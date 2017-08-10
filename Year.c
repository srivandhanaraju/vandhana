#include<stdio.h>
int main()
{
int year;
printf("enter the year");
scanf("%d",&year);
if(year%400==0)
printf("given year is a leap year");
else if(year%100==0)
printf("the given year is not a leap year");
else if(year%4==0)
printf("given year is leap year");
else
printf("the given year is not a leap year");
return 0;
}
