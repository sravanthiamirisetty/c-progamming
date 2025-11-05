#include<stdio.h>
int main()
{
   int n,sum,rem,num;
   printf("enter a 4 digit num:");
   scanf("%d",&n);
   num=n;
   sum=0;
   while(n!=0)
{
   rem=n%10;
   sum+=rem;
   n=n/10;
}
   printf("sum of %d is %d\n",num,sum);
    return 0; 	
}