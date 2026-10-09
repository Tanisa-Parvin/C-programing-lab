/*Write a C program to find sum of the following series:-
  1+10+101+1010+...upto n terms*/

#include<stdio.h>
int main()
{
	int n,i=1,term=0;
	long long sum=0;
	printf("Enter the no of terms:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)
		{
			term=term*10+1;
			printf("\n%d",term);
		}
		else
		{
			term=term*10;
			printf("\n%d",term);
		}
		i++;
		sum=sum+term;
		}
		printf("\nsum=%d",sum);
		return 0;
}
