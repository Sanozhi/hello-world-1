//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//素数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位素数输出。如果不存在5位素数，则输出ERROR。
#include<stdio.h>
int pun(int x){
	int i,y;
	for (i=2;i<x;i++){
		y=x%i;
		if (y==0){
		return 1;
		break;
	    }
	}
	if (i>=x){
		return 0;
	}
} 
int main()
{
    int x[5],i,j,k,m,a,b,c,d,s,n,z=0,y[120]; 
	scanf("%d %d %d %d %d",&x[0],&x[1],&x[2],&x[3],&x[4]);
	for(i=0;i<5;i++){
        a=x[0];
        x[0]=x[i];
		x[i]=a;     
		for(k=1;k<5;k++){
		    b=x[1];
			x[1]=x[k];
			x[k]=b;
		for(j=2;j<5;j++){
			c=x[2];
			x[2]=x[j];
			x[j]=c;
		for(m=3;m<5;m++){
			d=x[3];
			x[3]=x[m];
			x[m]=d;
			s=x[0]*10000+x[1]*1000+x[2]*100+x[3]*10+x[4];
			n=pun(s);
			if(n==0){
                y[z]=s;
				z++;
			}
			d=x[3];
			x[3]=x[m];
			x[m]=d;
        }
            c=x[2];
            x[2]=x[j];
            x[j]=c;
        }
            b=x[1];
            x[1]=x[k];
            x[k]=b;
        }
            a=x[0];
            x[0]=x[i];
            x[i]=a; 
        }
    if(z==0){
	   printf("error\n");
	}
    else{
   	   for(i=0;i<z;i++){
            for(j=0;j<z;j++){
                if(y[i]>=y[j]){
            	   k=k+1;
                }
			}
     	    if(k==z){
		        printf("%d\n",y[i]);
				break;
			}
    	    k=0;
		}
	}
    return 0;
}
