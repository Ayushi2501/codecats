#include<stdio.h>

int main()

{
	int year;
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("this is the leap year\n");
	
	}
	else 
	{
		printf("this is not the leap year\n");
	}
	return 0;
	
}