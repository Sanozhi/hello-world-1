#include<stdio.h>
int main()
{
	int m,n,j;
	printf("Enter the value of the first number:");
	scanf("%d",&m);
	printf("Enter the value of the second number:");
	scanf("%d",&n);
	i=m;
	while(j%m!=0 || j%n!=0) 
	{
		j=++j;
	}
		printf("Min=%d\n",j);
	
    return 0;
 } 
