#include<stdio.h>
int main()
{
int cp, sp;
scanf("%d %d", &cp, &sp) ;
double profit_percentage = ((sp-cp)*100.0)/cp;
printf("%.2f", profit_percentage);
return 0;
}
