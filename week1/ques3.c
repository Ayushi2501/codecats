#include<stdio.h>

int main ()
{
	
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b&&a>c)
	{
		printf("the max number is a\n");
	}
	else if(b>a&&b>c)
	{
		printf("the max number is b\n");
	}
	else
	{
		printf("the max number is c\n");
	}
	return 0;
	
	
}