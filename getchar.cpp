#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	/*getchar() 
		1. unformated single chracter reader function
		2. declare in stdio.h
		3. it is used to read single character 
		4. return  integer value. i.e. jis character ko read karega uska ascii code return karega
		5. can't store value diretoly in varaible bt assign value
		6. int getchar()
		6. eg. charvariable=getchar();	
	*/
	/*putchar() 
		1. unformated single chracter output function
		2. declare in stdio.h
		3. it is used to print single character 
		4. return  integer value i.e. jis character ko print karega uska ascii code return karega
		5. int putchar(variablename)
		6. eg. putchar(variablename);
	*/
	char ch;
	int r;
cout<<"\n Enter any character read with getchar:";
ch=getchar();
cout<<"\n you entered character : ";
r=putchar(ch);
cout<<"\n r:"<<r;
	return 0;
}
