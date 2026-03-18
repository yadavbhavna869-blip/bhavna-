#include<iostream>
using namespace std;
int main()
{
 try		
 {
 	cout<<"\n enter a number to print factorial:";
 int n,f=1;
 cin>>n;
 
 if(n<0)
 		throw "does not define factorial for negative values";
 if(n>10)
		throw "Limitation ! this program print only 1 to 10 's factorial ";
if(n='A-Z')
throw"does not define for alphabet:";
 cout<<endl<<n<<"number factorial:";
while(n>0)
{
 f=f*n;
 n--;
}
 cout<<f;
 }
 catch(const char *e)
 {
 	cout<<e;
 }

 return 0;
}
