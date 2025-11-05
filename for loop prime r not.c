#include<stdio.h>
int main()
{
	int i,n,fact;
	printf("enter any num :");
	scanf("%d",&n);
	for(fact=0,i=1;i<=n;i++)
	{
		if(n%i==0)
		
		fact++;
	    
	}
	if(fact==2)
	{
	printf( "prime");
	}
	else
	{
	printf( "not prime");
	}
	return 0;
}