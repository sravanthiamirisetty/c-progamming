#include<stdio.h>
int main()
{
	int n,sum,i;
	scanf("%d",&n);
	for(sum=0,i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}