/*Write a C program to print the following pattern
     4
    434
   43234
  4321234
 432101234
  4321234
   43234
    434
     4             
 */
 
 #include <stdio.h>
 int main()
 {
	int n,i,j,k;
	printf("Enter the no of lines:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    	for(k=0;k<=n-i;k++)
    	{
			printf(" ");
		}
		for(j=n;j>=n-i;j--)
		{
			printf("%d",j);
		}
		for(j=n+1-i;j<=n;j++)
		if(i!=0)
		{
			printf("%d",j);
		}
	printf("\n");
	}
	 for(i=n-1;i>=0;i--)
    {
    	for(k=0;k<=n-i;k++)
    	{
			printf(" ");
		}
		for(j=n;j>=n-i+1;j--)
		{
			printf("%d",j);
		}
		for(j=n+2-i;j<=n;j++)
		{
			printf("%d",j);
		}
	printf("\n");
	}
	return 0;
 }
     
