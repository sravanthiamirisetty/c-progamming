#include<stdio.h>
int main()
{
int i,n,rev;
scanf("%d",&n);
while (n>0)
{
rev=rev*10+n%10;
n/=10;
}
printf("%d", rev);
return 0;
}
