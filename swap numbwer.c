#include<stdio.h>
int main()
{
	int a,b,c;
	 printf("\n enter swap number:");
	 scanf("%d %d %d",&a,&b,&c);
	 b=a+b;
	 a=b-a;
	 b=b-a;
	 c=a+c;
	 a=c-a;
	 c=c-a;
	 printf("\n afterswap a is %d &b is %d c is %d",a,b,c);
	  
	getch();
}
