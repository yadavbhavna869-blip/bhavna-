#include<stdio.h>
int main()
{
	int a,b;
	printf("\n enter swap two numbers:");
	scanf("%d %d",&a,&b);
	printf("\n after swapingh a is %d & b is %d:",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n before swapingh a is %d b is %d",a,b);
	return 0;
}
