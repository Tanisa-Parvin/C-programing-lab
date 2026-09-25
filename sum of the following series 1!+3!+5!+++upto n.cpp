/*write a C program to find the sum of the following series 1!+3!+5!+....upto n numbers*/
//1!=1
//3!=1*2*3=6
//5!=1*2*3*4*5=120
//upto n!
#include<stdio.h>
int main()
{
	int i=1,c=1,a=1,n;
	long int fact,sum=0;
	printf("Enter the no of terms:");
	scanf("%d",&n);
	while(c<=n)
	{
		i=1;
		fact=1;
		while(i<=a)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		c++;
		a=a+2;
	}
	printf("sum of the number=%d",sum);
	return 0;
}
