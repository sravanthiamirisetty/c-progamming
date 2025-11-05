#include<stdio.h>
int main()
{
  int i,num,fact;
  printf("enter any num:");
  scanf("%d",&num);
  for(fact=0,i=1;i<=num;i++)
  {
  	if(num%i==0)
  	fact++;
  	
  }
  if(fact==2)
  {
  	printf("prime");
  }
  else
  {
  	printf("not prime");
  }
  return 0;
}
