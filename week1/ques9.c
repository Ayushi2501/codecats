#include<stdio.h>

int main()
{
	
	int maths,physics,biology,chemistry,computer;
	scanf("%d %d %d %d %d",&maths,&physics,&biology,&chemistry,&computer);
	int sum=(maths+physics+biology+chemistry+computer);
	 float percentage=sum /5;
	if(percentage>=90&&percentage<100)
	{
		printf("your grade is A");
	}
		if(percentage>=80&&percentage<90)
	{
		printf("your grade is B");
	}
		if(percentage>=70&&percentage<80)
	{
		printf("your grade is C");
	}
		if(percentage>=60&&percentage<70)
	{
	     printf("your grade is D");
		}
			if(percentage>=50&&percentage<60)
	{
		printf("your grade is E");
	}
		if(percentage<=40)
	{
		printf("your grade is F");
	}
       return 0;
}