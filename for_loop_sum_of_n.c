#include<stdio.h>
int main()
{
	int i,n,sum;
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++)
	{
	sum=sum+i;
	}
	printf("sum of first %d numbers is %d\n",n,sum);
	return 0;
}