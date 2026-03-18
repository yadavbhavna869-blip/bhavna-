#include<stdio.h>
int main()
{
	int m,n,i,s=0;
	printf("\n enter lower limit m:");
	scanf("%d",&m);
	printf("\n enter uper limt n:");  scanf("%d",&n);
	 printf("\n sum of number from %d to %d id %d",m,n,s);
	i=m;  
	printnaturalno:
		s=i;
		i++;
		if(i<=n)
		goto printnaturalno;
		return 0;
}
