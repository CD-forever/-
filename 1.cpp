#include <stdio.h>

int main()
{
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	
	printf("������һ������λ����");
	scanf("%d",&a);
	 
	b=a/100;
	c=a/10%10;
	d=a%10;
	e=d*100+c*10+b;
	
	printf("��ת���������λ����%d",e);
	
	return 0;
}
