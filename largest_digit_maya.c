#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int max_digits=0;
while(n>0)
{
int digits=n%10;
if(digits>max_digits)
max_digits=digits;
}
n/=10;
}
printf("%d",max_digits);
return 0;
}
