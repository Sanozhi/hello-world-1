//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值
#include<stdio.h>
int pun(int x){
	int j,n=0;
	for (j=0;j<9;j++){
		if (x%10==1){
			n++;
		}
		x=x/10;
	}
	return n;
}
int main()
{
	int i,n=0,j=0;
	for (i=1;i<199982;i++){
		n=pun(i);
		j=j+n;
		if (j==i){
			printf("%d\n",i);
		}
	}
	return 0;
 } 
