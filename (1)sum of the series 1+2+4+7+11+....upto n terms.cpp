/*write a C program to calculate sum of the given series:- 1+2+4+7+11+...upto n terms*/
#include<stdio.h>
int main()
{
	int term=1,i=1,sum=0,d=1,n;
	printf("Enter the no of terms:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",term);
		sum=sum+term;
		term=term+d;
		d++;
		i++;
	}
	printf("sum of the series is:%d\n",sum);
	return 0;
}
