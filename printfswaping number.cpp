#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n swping number:");
	scanf("%d %d %d",&a,&b ,&c);
   a=b;
   b=c;
   c=a;
	
	printf("\n swapingh number a is %d b is %d c is %d",a,b,c);
	return 0;
}
