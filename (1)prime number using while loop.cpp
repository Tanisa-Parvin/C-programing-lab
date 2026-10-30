//write a C program to check whether a number is prime or not using while loop 
#include<stdio.h>
int main()
{
	int i=2,n;
	printf("\n Enter a number:" );
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			break;
			i++;
		}
	}
	if(n<=1)
	{
		printf(" Its not a prime no");
	} 
	else if(i==n)
	{
		printf(" Its a prime no");
	}
	else
	{
		printf(" Its not a prime no");	
	}
	return 0;
}
