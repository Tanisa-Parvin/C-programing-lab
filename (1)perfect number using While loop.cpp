//write a c program to check whether a number is perfect or not
#include<stdio.h>
int main()
{
	int n,i=1,s=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			s=s+i;
		}
		i++;
	}
	if(s==n)
	{
		printf("perfect number");
	}
	else
	{
		printf("Not a perfect number");
	}
	return 0;
}
