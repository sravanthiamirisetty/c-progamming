#include<stdio.h>
int main()
{
int side, area, vol;
scanf("%d",&side);
area=6*(side*side);
vol=side*side*side;
printf("Surface area = %d and Volume = %d", area, vol);
return 0;
}
