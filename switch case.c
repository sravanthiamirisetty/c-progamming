#include<stdio.h>
int main()
{
	char op;
	double first,second;
	printf("enter the operator(+,-,*,/):");
	scanf("%c",&op);
	printf("enter two operands:");
	scanf("%lf %lf",&first,&second);
	switch(op)
	{
		case '+':
			printf("%.1lf + %.1lf = %.1lf",first,second,first+second);
		break;
		case '-':
		    printf("%.1lf - %.1lf = %.1lf",first,second,first-second);
		break;
		case '*':
		    printf("%.1lf * %.1lf = %.1lf",first,second,first * second);
		break;
		case '/':
		    printf("%.1lf / %.1lf = %.1lf",first,second,first / second);
		break;
	
		default:
		    printf("error!operators are not correct");
    }
	return 0;
}
						
	
