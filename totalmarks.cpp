#include<stdio.h>
int main()
{
	int m,h,e,s,sst,total,av;

	
	printf("\n enter five subject  total and average marks:");
	scanf("%d %d %d %d %d %d",&m,&h,&e,&s,&sst);
	total=m+h+e+s+sst;/100
	
	printf("\n input a marks m is %d & h is %d & e is %d & s is %d & sst is %d",total);
	return 0;
}
