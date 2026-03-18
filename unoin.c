#include<stdio.h>
#include<conio.h>
union student
{
int sid;
char snm[30],scourse[20],sm[11];
float sfee;
};

int main()
{
union student s1={1,"bhavna","b.teach","9893786275",50000};
union student s2,s3;
// input s2
printf("\n enter snm:");
fflush(stdin);
scanf("%s",&s2.snm);
printf(" enter sm:");
fflush(stdin);
scanf("%s",&s2.sm);
printf("\n enter scourse:");
fflush(stdin);
scanf("%s",&s2.scourse);
printf("\n enter sfee:");
scanf("%f",&s2.sfee);
printf("\n enter id:");
scanf("%d",&s2.sid);
// s3
printf("\n enter snm:");
fflush(stdin);
scanf("%s",&s3.snm);
printf(" enter sm:");
fflush(stdin);
scanf("%s",&s3.sm);
printf("\n enter scourse:");
fflush(stdin);
scanf("%s",&s3.scourse);
printf("\n enter sfee:");
scanf("%f",&s3.sfee);
printf("\n enter id:");
scanf("%d",&s3.sid);

printf("\n  sid\t snm\t scourse\t sm\t sfee\n");
printf("\n %d\t %s\t %s\t %s\t %0.2f",s1.sid,s1.snm,s1.scourse,s1.sm,s1.sfee);
printf("\n %d\t %s\t %s\t %s\t %0.2f",s2.sid,s2.snm,s2.scourse,s2.sm,s2.sfee);
printf("\n %d\t %s\t %s\t %s\t %0.2f",  s3.sid,s3.snm,s3.scourse,s3.sm,s3.sfee);
getch();
return 0;
}
