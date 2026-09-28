/*write a C program to calculate sum of the given series:- 2+5+8++11+14+...upto n terms*/
#include<stdio.h>
int main()
{
	int term=2,i=1,sum=0,n;
	printf("Enter the no of terms:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+term;
		term=term+3;
		i++;
	}
	printf("sum of the series is:%d\n",sum);
	return 0;
}
