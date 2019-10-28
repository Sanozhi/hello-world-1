//一个旅行社有 72 人，其中会英语的有 48 人，会俄语的有 36 人，两样都不会的有 8 人，两样都会的有

//_______个。

//编程：输入旅行社有72人

//     输入会英语48人

//     输入会俄语36人

//     输入两样都不会有8人

//     输出两样都会的有   人 

//     输出：输入数据错误，无法计算
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
