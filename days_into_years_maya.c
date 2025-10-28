#include<stdio. h>
int main()
{
int total_days;
int years, weeks, days;
scanf("%d",&total_days);
years=total_days/365;
int remaining_days_after_years=total_days%365;
weeks=remaining_days_after_years/7;
days=remaining_days_after_years%7;
printf("%d", years);
printf("%d", weeks) ;
return 0;
}
