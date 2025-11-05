#include<stdio.h>
int main()
{
	int a,b,big,c;
	printf("enter the values:");
	scanf("%d %d %d ",&a,&b,&c);
	big=(a>b)?((a>c)?a:c)
	printf("%d",big);
	return 0;
	
}