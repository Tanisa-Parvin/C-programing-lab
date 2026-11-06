/* write a C program to print
	12345
	 1234
	  123
	   12
	    1 
*/

#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("\n Enter the no of lines \n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=n-i+1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
