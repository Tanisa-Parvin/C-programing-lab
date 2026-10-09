/* 1-3+5-7+9...upto n terms*/
#include<stdio.h>
int main()
{
	int n,i=1,term=1,sum=0,sign=1;
	printf("Enter the number term:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+sign*term;
		if(i<n)
		{
			if(sign==1)
			{
				printf("%d-",term);
			}
			else
			{
				printf("%d+",term);
			}
		}
		else
		{
			printf("%d",term);
		}
		term=term+2;
		sign=sign*(-1);
		i++;
	}
	printf("\nsum=%d",sum);
	return 0;
}
