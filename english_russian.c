//һ���������� 72 �ˣ����л�Ӣ����� 48 �ˣ��������� 36 �ˣ�������������� 8 �ˣ������������

//_______����

//��̣�������������72��

//     �����Ӣ��48��

//     ��������36��

//     ����������������8��

//     ��������������   �� 

//     ������������ݴ����޷�����
#include<stdio.h>
int main()
{
	int a,b,c,d,x;
	
	printf("Enter the total number of people:");
	scanf("%d",&a);
	printf("Enter the number of knowing English:");
	scanf("%d",&b);
	printf("Enter the number of knowing Russian:");
	scanf("%d",&c);
	printf("Enter the number of knowing neither:");
	scanf("%d",&d);
	
	x=b+c+d-a;
	
	if (x>=0){
		printf("the number of knowing both:%d\n",x);}
	else{
		printf("Input error,can't calculate.");
	}
	
	return 0;

 } 
