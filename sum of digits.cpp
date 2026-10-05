/*write a C program to calculate sum of digits  */
#include<stdio.h>
int main()
{
	int num,sum=0,digit;
	printf("Enter the num:");
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		num=num/10;
		sum=sum+digit;
	}
	printf("The sum is:%d",sum);
	return 0;
}
