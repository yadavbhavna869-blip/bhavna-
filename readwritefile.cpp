#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
FILE *fp; 
char nm[20],mb[11],course[20];
char b[5];
fp=fopen("studentrecords.txt","a");//w-write r-read,a-append
if(!fp){
	std::cout<<"\n file not creat/open";
	return 1;
}
fprintf(fp,"\n Today: %s:%s",__DATE__,__TIME__);
cout<<"\n Enter student name:"; gets(nm);
cout<<"\n Enter student Mobile No:"; gets(mb);
cout<<"\n Enter student Course:"; gets(course);
fprintf(fp,"\n%s\t%s\t%s",nm,mb,course);
fclose(fp);
cout<<"\n Record Inserted\n Existing Records Here";
fp=fopen("studentrecords.txt","r");//w-write r-read,a-append
if(!fp){
	std::cout<<"\n file not creat/open";
	return 1;
}
while(fgets(b,5,fp))
	cout<<b;
fclose(fp);
return 0;	
}
