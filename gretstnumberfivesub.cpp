#include<stdio.h>
int main()
{
	 int m,c,p,h,e,total;
	printf("\n enter five subject marks:");
	scanf("%d %d %d %d %d",&m,&c,&p,&h,&e);
	
	total=m/5;
	total=c/5;
	total=p/5;
	total=h/5;
total=e/5;
	 if(m>c)
	 {
	 	if(m>p)
	 	{
	 		if(m>h)
	 		{
	 			if(m>e)
	 			{
	 				printf("\n m: %d is gretest",m);
				 }
			 }
		 }
	 
	else {
	 printf("\n p: %d is gretest",p);	
	 }
	 else {
	 	printf("\n h: %d is gretest",h);
	 }
	 else{
	 	printf("\n e: %d is gretest",e);
	 }
}
	 return 0;
}

