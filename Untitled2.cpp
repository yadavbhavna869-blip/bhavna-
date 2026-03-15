#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,total,average;
	printf("\n enter five subject marks:");
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	total=m1+m2+m3+m4+m5;
	average=total/5;
	if (average>=75)
	{
		printf("distrinction:");
	}
	
	else if(average>=75) {
		printf(" first class:");

}
		
	else if(average>=50){
	printf("\n second class:");
				}
		
else if(average>=35)

	{
		printf("pass:");
	}
	
else{
	printf("fail:");
	
}
return 0;
}
