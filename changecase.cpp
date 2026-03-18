#include<iostream>
using namespace std;
int main()
{
	char ch;
cout<<"\n enter alphabet and change its case:";
cin>>ch;
if(ch>='a' && ch<='z'&& ch>='A'&& ch<='Z' )
{
	cout<<"\n small alphabet: "<<ch;
    
    ch+32;
    	cout<<"\n ascll valu:"<<ch;
	
}
else
{
	cout<<"\n capital alphabet:";
}

return 0;
	
}
