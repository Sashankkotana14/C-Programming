#include<stdio.h>
int main()
{
	int a=10,*p,**q;
	p=&a;
	q=&p;
	printf("Value of a=%d",a);
	printf("\n value of p=%d",*p);
	printf("\n value of q=%d",**q);
	return 0;
}
output:Value of a=10
 value of p=10
 value of q=10
