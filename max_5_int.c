//С���� 5 �����ֿ�Ƭ������ֱ�Ϊ���� 1�� 2�� 3�� 6�� 9��С�������� 5 �����ֿ�Ƭ���һ������ 5 λ

//���������λ����_______��

//��̣���������5�����֣����������Ϊ����5λ�������
//��������

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
