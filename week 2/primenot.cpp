#include<stdio.h>

int main()
{
	int num,i,flag=0;
	scanf("%d",&num);
	
	for(i=0;i<=num/2;++i)
	{
		if(num%i==0)
		{
		
		flag==1;
		break;
	}
	}
	if(flag==0)
	{
		printf("the number is not prime\n");
	}
	else
	{
		printf("the number is prime\n");
	}
	return 0;
}