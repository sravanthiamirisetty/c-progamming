#include<stdio.h>
int main()
{
int n, sum, digits;
scanf("%d", &n);
while(n != 0)
{
digits=n%10;
sum=sum+digits;
n=n/10;
}
printf("%d", sum);
return 0;
}
