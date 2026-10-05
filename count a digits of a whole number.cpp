//w.a.c program to count a digits of a whole number
#include<stdio.h>
int main()
{
	int num,digit,count=0;
	printf("Enter the whole num:");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		printf("%d\n",digit);
		num=num/10;
		count++;
	}
	printf("The digit count is:%d",count);
	return 0;
}
