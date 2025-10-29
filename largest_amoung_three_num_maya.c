#include<stdio.h>
int main()
{
int large, a,b,c;
scanf("%d %d %d", &a, &b, &c);
large=(a>b) ?a: (b>c)?b:c;
printf("%d", large);
return 0;
}
