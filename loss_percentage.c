#include<stdio.h>
int main()
{
	int cp,sp;
	double loss,loss_percentage;
	scanf("%d%d",&cp,&sp);
	loss=cp-sp;
	loss_percentage=(loss/cp)*100;
	printf("%.2lf",loss_percentage);
	return 0;
}
	  