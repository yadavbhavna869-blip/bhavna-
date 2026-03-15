#include<stdio.h>
int main()
{
	int i,m,n;
	printf("\n enter  value of n to m:");
	scanf("%d %d ",&m,&n);
	printf("\n print value form %d to %d\n ",m,n);
	for(i=m;i<=n;i++)
	{
		printf("\t ",i);
	}
	return 0;
}
