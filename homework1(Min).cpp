#include<stdio.h>
int main()
{
	int m,n,i;
	printf("Enter the value of the first number:");
	scanf("%d",&m);
	printf("Enter the value of the second number:");
	scanf("%d",&n);
	i=m;
	while(i%m!=0 || i%n!=0) 
	{
		i=++i;
	}
		printf("Min=%d\n",i);
	
    return 0;
 } 
