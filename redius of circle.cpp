#include<stdio.h>
int main()
{
	float r,a,c,d;
	
printf("\n enter radius of circle:");
scanf(" %f ",&r);
d=2*r;
c=2*3.142*r;
a=3.142*r*r;
printf("\n print diameter is %f circumference is %f and area is  %f",d,c,a);
return 0;
}
