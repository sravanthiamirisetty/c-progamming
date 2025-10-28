#include<stdio.h>
int main()
{
double P,R, T, ci;
scanf("%If %1f %1f",&P,&R,&T);
ci=P*pow((1+R/100),T)-P;
printf("%.21f",ci);
return 0;
}
