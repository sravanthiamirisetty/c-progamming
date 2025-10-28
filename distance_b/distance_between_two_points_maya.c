#include<stdio.h>
#include<math.h>
int main()
{
double x1,y1,x2, y2, distance;
scanf("%If %If %If %1f",&x1,&y1,&x2,&y2);
distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("%.41f", distance);
return 0;
}
