
#include<stdio.h>
#include<conio.h>
struct student
{
int sid;
char snm[30],scourse[20],sm[11];
float sfee;
};

int main()
{
struct student s1[10];
int as,i;
printf("\n How many students records enter value bt <10:");
scanf("%d",&as);
printf("\n %d Students records enter:\n",as);
for(i=0;i<as;i++)
{
	printf("\n Student Record %d :",i+1);
	printf("\n enter student Name:");
	fflush(stdin);
	scanf("%s",&s1[i].snm);
	printf("\n enter student Course:");
	fflush(stdin);
	scanf("%s",&s1[i].scourse);	
	printf("\n enter student Mobile No:");
	fflush(stdin);
	scanf("%s",&s1[i].sm);	
	printf("\n enter student id:");
	fflush(stdin);
	scanf("%d",&s1[i].sid);	
	printf("\n enter student fee:");
	scanf("%f",&s1[i].sfee);	
			
}
printf("\nid\t Student Name \t course\t MobileNo\t Fee\n");
for(i=0;i<as;i++)
{
printf("\n%d\t %s\t %s\t %s\t %0.2f",s1[i].sid,s1[i].snm,s1[i].scourse,s1[i].sm,s1[i].sfee);			
}

getch();
return 0;
        }

