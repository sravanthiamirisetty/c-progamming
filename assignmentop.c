#include<stdio.h>
int main()
{
	int a=20;
	int b=5;
	printf("assign b value to a:%d\n",a=b);
	printf("add b value to a:%d\n",a+=b);
	printf("substract b value to a:%d\n",a-=b);
	printf("multiply b value to a:%d\n",a*=b);
	printf("quotient b value to a:%d\n",a%=b);
	printf("remainder b value to a:%d",a/=b);
}