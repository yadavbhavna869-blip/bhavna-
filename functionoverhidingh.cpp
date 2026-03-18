#include<iostream>
using namespace std;
class basecls
{
	public:
		void fo()
		{
	cout<<"\n basecls function overriding:";
		}
	void fh()
	{
		cout<<"\n basecls for hiding:";
	}
	void f1()
	{
		cout<<"\n f1() basecls";
	}
};
class derivdcls:public basecls
{
	public:
		void fo()
		{
			cout<<"\n  derivdcls fun overridingh:";
			
		}
	void fh(int x)
		{
			cout<<"\n derivdcls for hiding:";
			
		}
		void f2()
		{
			cout<<"\n f2() derivdcls f2:";
		}
};
int main()
{
	basecls ob;
	ob.fo();
	ob.fh();
	ob.f1();
//	ob.f2(); eror
 derivdcls od;
	od.fo();
	od.f2();
	od.f1();
//	od.fh(); eror
	od.basecls::fh();
	od.fh(10);
	
	return 0;
}
