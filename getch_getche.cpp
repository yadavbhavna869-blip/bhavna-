#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	/*getch() 
		1. unformated single chracter reader function
		2. declare in conio.h
		3. use only in desktop compiler 
		4. it is used to read data without eachoing 
		5. return  integer value. i.e. jis character ko read karega uska ascii code return karega
		6. can't store value diretoly in varaible bt assign value
		7. int getch()
		8. eg. charvariable=getch();	
	*/
	/*getche() 
		1. unformated single chracter reader function
		2. declare in conio.h
		3. use only in desktop compiler 
		4. it is used to read data with eachoing 
		5. return  integer value. i.e. jis character ko read karega uska ascii code return karega
		6. can't store value diretoly in varaible bt assign value
		7. int getche()
		8. eg. charvariable=getche();
	*/
	char ch;
cout<<"\n Enter any character read with getch without Eacho:";
ch=getch();
cout<<"\n you entered character : "<<ch;
cout<<"\n Enter any character read with getche with Eacho:";
ch=getche();
cout<<"\n you entered character : "<<ch;
	return 0;
}
