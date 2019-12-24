//超级素数：它本身，各位数字的和，各位数字的平方和，都是素数。
//求 100~10000 内的所有超级素数，及它们的平均数。
#include<stdio.h>
int pun(int x){
	int i,a;
	for (i=2;i<x;i++){
		a=x%i;
		if (a==0){
		return 1;
		break;
	    }
	}
	if (i>=x){
		return 0;
	}
} 
int pun1(int x){
	int a,a1,b,c,d,e,f,y,z;
	b=x%10;
    c=((x-b)/10)%10;
    d=((x-b-c*10)/100)%10;
    e=((x-b-c*10-d*100)/1000)%10;
    f=((x-b-c*10-d*100-e*1000)/10000)%10;
    y=b+c+d+e+f;
    z=b*b+c*c+d*d+e*e+f*f;
    a=pun(y);
    a1=pun(z);
    if (a==0&&a1==0){
    	return 0;
	}
	else{
		return 1;
	}
}
int main()
{
	int x,i=0,s=0,j;
	int o[512];
	for (x=100;x<10001;x++){
	     if (pun(x)==0&&pun1(x)==0){
	     	o[i]=x;
	     	i++;
		 }
    }
    for (j=0;j<i;j++){
    	s=s+o[j];
	}
    for (j=0;j<i;j++){
    	printf("%d\n",o[j]);
	}
	printf("%d\n",s/i);
	return 0;
}
