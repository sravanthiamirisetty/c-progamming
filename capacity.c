#include<stdio.h>
int main()
{
	int T,S,B;
	long capacity_by,
	capacity_kb;
	scanf("%d %d %d",&T,&S,&B);
	capacity_by=2L*T*S*B*512;
	capacity_kb=capacity_by/1024;
	printf("5ld KB",capacity_kb);
	return 0;
}
