#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	/*gets() : get string
		1. unformated  reader function
		2. declare in stdio.h
		3. it is used to read string
		4. char gets[str] 
		5. data seperator : Enter key (\n)
				
	*/
	/*puts() : put string 
		1. unformated  output function
		2. declare in stdio.h
		3. it is used to print string  
		4. char puts[str] 
	*/
	char ch[20]; // ch is a string varaible 
	int r;
cout<<"\n Enter any string :";
gets(ch);
cout<<"\n you entered string : ";
puts(ch);

	return 0;
}
