#include<stdio.h>
int main()
{
int i, n, count;
scanf("%d",&n);
if(n == 0)
{
count=1;
}
else
{
for(;n != 0;n/=10)
{
count++;
}
}
printf ("%d, count) ;
return 0;
}
