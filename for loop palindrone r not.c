#include<stdio.h>
int main()
{
 int n,i=1,fact=i;
 scanf("%d",&n);
 while(i<=n)
 {
 	fact=fact*i;
 	i++;
 }
 printf("%d=%d",n,fact);
}