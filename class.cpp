#include<iostream>
using namespace std;

class myclass

{
	private:
		int a;
	protected:
		int b ;
	public:
	int c ,d,e;
	void printmsg()
	{
	cout<<"\n Hello c C++: ";	
	}
	void inputnumber()
	{
	cout<<"\n enter a number:";
	cin>>a;	
	}
	void printnumber()
	{
		cout<<"\n enter a number:";
		cin>>a>>b;
		cout<<"\n add number:"<<a+b;
	}
	
};
 int main()
 {
  myclass ob1;
  //ob1.printmsg();
  //ob1.inputnumber();
  ob1.printnumber();
 return 0;
 }

