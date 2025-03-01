#include <stdio.h>

int main()
{
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	
	printf("请输入一个正三位数：");
	scanf("%d",&a);
	 
	b=a/100;
	c=a/10%10;
	d=a%10;
	e=d*100+c*10+b;
	
	printf("逆转过来后的三位数：%d",e);
	
	return 0;
}
