#include<stdio.h>
#include<iostream>
int main()
{
FILE *fp; // FILE ek predefine structure hai jo stdin me declare & define hai
char nm[20];
fp=fopen("myfile.txt","a");//w-write r-read,a-append
// fopen() predefine function h, current location pr file (diye gaye name ki file) ko search kar diye gaye mode me open karega yadi file nhi h to use creat kar open karega
// open and return file location to pointer
if(!fp){
	std::cout<<"\n file not creat/open";
	return 1;
}
std::cout<<"\n Enter your name:";
gets(nm);
fprintf(fp,"\n Today: %s:%s\n %s",__DATE__,__TIME__,nm);
fclose(fp);
std::cout<<"\n Record Inserted ";
return 0;	
}
