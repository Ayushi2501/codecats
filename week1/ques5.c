#include<stdio.h>

int main()
{
	
	char a;
	scanf("%c",&a);
	
	if(a>=33&&a<48&&a<=58&&a>65)
	{
		printf("this is the special character\n");
	}
	else if(a>=48&&a<58)
	{
		printf("this is the number\n");
	}
	else if(a>=65&&a<123)
	{
		printf("this is the alphabet\n");
	}
	return 0;
}