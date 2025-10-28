#include<stdio.h>
int main ( )
{
int a,b;
scanf("%d %d",&a, &b);
int correct=a+b;
int vijay=a*b;
int abs_diff=abs(correct-vijay);
printf("%d", abs_diff);
return 0;
}
