#include<stdio.h>
int main()
{
	char op;
	double first,second;
	printf("operator(+,-,*,/,%):");
	scanf("%c",&op);
	printf("operands:");
	scanf("%lf %lf",&first,&second);
	switch(op)
	{
	
	case'+':
	printf("%.1lf+%.1lf=%.1lf",first,second,first+second);
	break;
	case'-':
	printf("%.1lf-%.1lf=%.1lf",first,second,first-second);
	break;
	case'*':
	printf("%.1lf*%.1lf=%.1lf",first,second,first*second);
	break;
	case'/':
	printf("%.1lf/%.1lf=%.1lf",first,second,first/second);
	break;
	

	default:
		printf("error!operators r invalid");
	}
	return 0;	
	
	
}