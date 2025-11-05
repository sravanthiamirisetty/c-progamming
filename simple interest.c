 #include<stdio.h>
int main()
{
	int p,t,r;
	float si;
	printf("enter principle amount:");
	scanf("%d",&p);
	printf("enter time:");
	scanf("%d",&t);
	printf("enter rate of interst:");
	scanf("%d",&r);
	si=p*t*r/100;
	printf("%.2f",si);
	return 0;
}