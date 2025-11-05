#include<stdio.h>
int main()
{
	int math,tel,hin,eng,sci,avg;
	
	printf("enter the marks:");
	scanf("%d %d %d %d %d",&tel,&hin,&eng,&math,&sci);
	avg=tel+hin+eng+math+sci/5;
	printf("%d",avg);
	
}