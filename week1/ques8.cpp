#include<stdio.h>
#include<math.h>

int main()
{
	
	float a,b,c,discriminant,root1,root2;
	scanf("%f %f %f",&a,&b,&c);
	discriminant=b*b-4*a*c;
	if(discriminant==0)
	{
		root1=root2=-b/(2*a);
		printf("the roots are equal that is %f",root1);
	}
	if(discriminant>0)
	{
		root1= (-b+sqrt(discriminant))/2*a;
			root2= (-b-sqrt(discriminant))/2*a;
			printf("root1 and root2 are %f %f",root1,root2);
	}
	else
	{
		float imag_part =sqrt(-discriminant)/(2*a);
		float real_part=-b/(2*a);
		printf("root1 and root2 are %f %f ",imag_part,real_part);
	}
	return 0;

}