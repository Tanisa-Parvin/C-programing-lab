/*write a C program to calculate the sum of the given series:- 1+2+4+7+11+...upto n terms*/
#include<stdio.h>
int main()
{
	int term=1,i=1,sum=0,n;
	printf("enter the no of terms:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+term;
		term=term+i;
		i++;
	}
	printf("the value of sum is:%d\n",sum);
	return 0;
}
