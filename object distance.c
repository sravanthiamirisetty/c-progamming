#include<stdio.h>
int main()
{
	float a,t,u,d;
	printf("enter a value:");
	scanf("%f",&a);
	printf("enter t value:");
	scanf("%f",&t);
	printf("enter u value:");
	scanf("%f",&u);
	d=u*t+a*t*t/2.0;
	printf("%.2f",d);
}
