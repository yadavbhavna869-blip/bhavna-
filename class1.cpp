#include<iostream>
using namespace std;
class complex
{
	private:
	int hello;
	protected:
	int hii;
	public:
	void welcome()
	
	{
		cout<<"\n hii:";
	}
	complex()
	{
		cout<<"\n hii:";
	}
	~complex()
	{
		cout<<"\n how are you";
	}
	void getdata();
	void showdata()
	{
		cout<<"\n hello:"<<hello<<"\t hii:"<<hii;
	}
	
};
void complex::getdata()
{
	cout<<"\n value of dm:";
	cin>>hello>>hii;
	
}
int main()
{
	complex oc1;
	
	cout<<"\n memory of oc1:" << sizeof (oc1) ;
	
	oc1.showdata();
	complex oc2;
	cout<<"\n enter data for oc2:";
	oc2.getdata();
	 return 0;
}
