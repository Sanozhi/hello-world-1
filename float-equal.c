//ʵ�ִ����ж�2��float�������

//��ȷ��ʱС�����5λ

#include <stdio.h>
#include <math.h>


int main()

{
    float m,x,c;
    
    printf("Enter a number m:");
    scanf("%f",&m);
    printf("Enter another number x:");
    scanf("%f",&x);
    
    c=x-m;
    c=fabs(c);
    
    if (c<0.00001)
    {
    	printf("result: m=x\n");
	}
	else
	{
		printf("result: m!=x\n");
	}
    
	return 0;

}
