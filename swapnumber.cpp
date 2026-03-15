#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n swap two variable:");
	scanf("%d %d %d",&a,&b,&c);
	printf("\n before swap:a is %d & b is %d & c is %d",a,b,c);
	 a=b;
	 b=c;
	 
	 printf("\n afterswap a is %d b is %d & c is %d",a,b,c);
	return 0;
}
