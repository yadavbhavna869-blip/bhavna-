#include<stdio.h>
int main()
{
	int p,r,t,i;
	printf("\n enter print a simple interest:");
	scanf("%d %d %d",&p,&r,&t);
	i=(p*r*t)/100;
	printf("\n print simple interest is %d:",i);
	return 0;
}
