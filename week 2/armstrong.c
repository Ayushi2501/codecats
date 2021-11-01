#include<stdio.h>

 int main()
 {
 	int n,a,sum=0,r;
 	scanf("%d",&n);
 	
 	a=n;
 	while(n>0)
 	{
 	r=n%10;
 	sum=sum+(r*r*r);
	 n=n/10;	
	 }
	 if(a==sum){
	 	printf("the number is armstrong\n");
	 }
	 else
	 {
	 	printf("the number is not armstrong\n");
	 }
	 return 0;
 }