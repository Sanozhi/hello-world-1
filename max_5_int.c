//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位

//数，这个五位数是_______。

//编程：任意输入5个数字，将它们组合为最大的5位数输出。
//交换排序

#include <stdio.h>

int main() {

  int x[5],i,a;
  printf("Enter the five numbers:");
  scanf("%d %d %d %d %d", &x[0], &x[1], &x[2],&x[3],&x[4]);
    
    for (a=4;a>i;a--){
	
	  for(i=0;i<a;i++) {

       if( x[i] > x[i+1]) {

  	    int temp = x[i];

  	    x[i] = x[i+1];

  	    x[i+1] = temp;

      }
    }
    i=0;
}
	
	
    printf("The maximum of five-digits number is %d%d%d%d%d", x[4], x[3], x[2],x[1],x[0]);

  

  return 0;

}
