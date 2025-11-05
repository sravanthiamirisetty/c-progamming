#include<stdio.h>
int main()
{
		float units;
		int price,amount;
	    printf("enter units:");
	    scanf("%f",&units);
	    if(units<=50)
	    {
	        price=20;
		}
		else if(units<=100)
		{
		    price=30;
		}
		else if(units<=200)
		{
			price=40;
		}
		else if(units>200)
		{
			price=50;
		}
		amount=units*price;
		printf("amount is : %d ",amount);
		return 0;
}