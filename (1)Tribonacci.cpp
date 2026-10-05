// Tribonacci
#include<stdio.h>
int main()
{
	int a=0,b=1,c=1,d,n,i=1;
	printf("Enter the terms:");
	scanf("%d",&n);
	printf("tribonacci series:");
	while(i<=n)
	{
		printf("\t%d",a);
		d=a+b+c;
		a=b;
		b=c;
		c=d;
		i++;
	}
	return 0;
}
