#include<iostream>
using namespace std;
class sbibank
{
	private:
		int amt;
		protected: string name;
		public:
			sbibank()
		{
			amt=0;
		}
		~  sbibank()
		
		{
		amt=-1; name="";
		}
		void inputdata()
		{
			cout<<"\n enter your name :";  cin>>name;
			cout<<"\n enter deposit amount:"; cin>>amt;
			
		}
		void printdata()
		{
			cout<<"\n your name:"<<name;
			cout<<"\n amount:"<<amt;
		}
};
int main()
{
	sbibank *p=NULL;
	cout<<"\n address of object pointer p:"<<&p;
	cout<<"\n value of pointer object and address of dynamic memory block:"<<p;
	p=new sbibank;
	cout<<"\n value of pointer object and address of dynamic memory block:"<<p;
	p->inputdata();
	p->printdata();
	delete p;
	p->printdata();
	cout<<"\n value of pointer object and address of dynamic memory block:"<<p;
	return 0;
}
