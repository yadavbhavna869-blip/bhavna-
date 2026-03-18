#include<stdio.h>
int main()
{
	int a,b,c;
	 printf ("\n enter the value of a and b:");
	
	 scanf("%d %d %d",&a,&b,&c);
	b=a+b+c;
	a=b-a-c;
	c=a-c-b;
	b=b-a-c;
	 printf ("before the value swapping a is %d and b is %d c is %d",a,b,c);	  
	return 0;
}
