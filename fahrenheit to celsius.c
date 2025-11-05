#include<stdio.h>
int main()
{
	float c,f;
	printf("enter f:");
	scanf("%f",&f);
	c=(f-32)*0.55;
	printf("%.2f",c);
	return 0;
}