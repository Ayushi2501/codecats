#include<stdio.h>

int main()
{
	int amount;
	scanf("%d",&amount);
	
	if(amount>=1000)
	{
		int notes1000=amount/1000;
		printf("notes of 1000 is%d\n",notes1000);
		
	}
	amount=amount%1000;
		if(amount>=500)
	{
		int notes500=amount/500;
		printf("notes of 500 is%d\n",notes500);
		
	}
		amount=amount%500;
		if(amount>=100)
	{
		int notes100=amount/100;
		printf("notes of 100 is%d\n",notes100);
		
}
                	amount=amount%100;
		if(amount>=50)
	{
		int notes50=amount/50;
		printf("notes of 50 is%d\n",notes50);
	}
		amount=amount%50;
		if(amount>=10)
	{
		int notes10=amount/10;
		printf("notes of 10 is%d\n",notes10);
	}
		amount=amount%10;
		if(amount>=5)
	{
		int notes5=amount/5;
		printf("notes of 5 is%d\n",notes5);
	}
		amount=amount%5;
		if(amount>=1)
	{
		int notes1=amount/1;
		printf("notes of 1 is%d\n",notes1);
	}
	return 0;
		
		
		
		
}