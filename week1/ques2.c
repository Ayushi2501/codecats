#include<stdio.h>

int main()

{
	int a,b;
	printf("the numbers are\n");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	{
	printf("the maximum number is a\n");
	}
	else
	{
		printf("the maximum number is b\n");
	}
	return 0;
}