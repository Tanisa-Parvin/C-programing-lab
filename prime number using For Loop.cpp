//write a C program to check eherher a number is prime or not using for loop
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(i%n==0)
		{
			break;
		}
	}
	if(n<=1)
	{
		printf("Not a prime number");
	}
	else if(i==n)
	{
		printf(" A prime number");
	}
	else
	{
		printf("Not a prime number");
	}
	return 0;
}
