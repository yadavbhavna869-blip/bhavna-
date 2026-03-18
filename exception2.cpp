#include<iostream>
using namespace std;
int main()
{
	try{
		cout<<"\n enter two values:";
		int a,b;
		cin>>a>>b;
		if(b==0)
		{
			throw"divide by zero error/exception";
			
			}
			int c=a/b;
			cout<<endl<<a<<" divide by:"<< b <<" is "<<c;	
			}
		catch(char*e)
		{
			cerr<<e;
		}
		return 0;
		}

