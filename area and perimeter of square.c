#include<stdio.h>
int main()
{
	int side;
	scanf("%d",&side);
	int Area=side*side;
	int Perimeter = 4*side;
	printf("%d %d",Area,Perimeter);
	return 0;
}