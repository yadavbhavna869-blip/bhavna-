#include<stdio.h>
int main()
{
	int n,i;
printf("\n  enter natural number:");
scanf("%d",&n);
printf("\n print first %d natural number\n:",n);
i=1;
printnaturalno:
	printf("%d\t",i);
	i++;
	if(i<=n)
	goto printnaturalno;
 return 0;                                                                                                                                                                                                                                                                                                                             	
}
