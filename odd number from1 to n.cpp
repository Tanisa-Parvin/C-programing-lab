/* write a C program to display odd numbers from 1 to N */
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter the value of N:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("The odd numbers are:%d\n",i);
		i=i+2;
	}
	return 0;
}
