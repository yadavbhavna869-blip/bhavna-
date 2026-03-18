#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
FILE *fp; 
char b[5];
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
