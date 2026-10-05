//w.a.c program to reverse the digits of a whole number
#include<stdio.h>
int main()
{
	int num,digit,rev=0;
	printf("Enter the whole number:");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		printf("%d\n",digit);
		num=num/10;
		rev=rev*10+digit;
	}
	printf("The reverse digit is:%d",rev);
	return 0;
}
