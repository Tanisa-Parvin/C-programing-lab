/* write a C program to print center triangle triangle    */ 

#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the no of lines:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i*2-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

