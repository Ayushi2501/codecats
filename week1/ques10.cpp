#include<stdio.h>

int main()
{
	int salary,hra,da;
	scanf("%d",&salary);
	
	if(salary<=10000)
	
	{
		hra=salary*0.2;
		da=salary*.8;
		int gross_sal=salary+hra+da;
		printf("gross salary is%d\n",gross_sal);
	}
	if(salary<=20000&&salary>=10000)
	
	{
		hra=salary*2.5;
		da=salary*.9;
		int gross_sal=salary+hra+da;
		printf("gross salary is%d\n",gross_sal);
	}
	if(salary>20000)
	
	{
		hra=salary*0.3;
		da=salary*9.5;
		int gross_sal=salary+hra+da;
		printf("gross salary is%d\n",gross_sal);
	}
	return 0;
	
}