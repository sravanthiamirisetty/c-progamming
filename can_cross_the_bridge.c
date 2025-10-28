#include<stdio.h>
int main()
{
	int x,y,z;
	float max;
	scanf("%d %d %d",&x,&y,&z);
	max=((z-y)/x);
	printf("%d",(int)max);
	return 0;
}