#include<iostream>
using namespace std;
class sbibank
{
	private: int amt;
	protected: int ac;
	public:
		void getdata()
		{ 
		cout<<"\n enter account"; cin>>ac;
		cout<<"\n enter Amount"; cin>>amt;
		}
		inline void printdata();
		//ReturnType operator opratorsymbol (argument); operator decalre as a member function
	sbibank operator + 	(sbibank); //prototype/Declarartion
	bool operator > (sbibank);
};
void sbibank::printdata()
{
	cout<<"\n Account No: "<<ac;
	cout<<"\n Amount No: "<<amt;
}
/*
ReturnType Clsname:: operator opratorsymbol (parameter){ code}
*/
sbibank sbibank::operator +(sbibank t2)
{ // redefine operator to parform action(arithmetic, relational and logical ) on object
	sbibank t3;
	t3.amt=amt-t2.amt;
	t3.ac=0;
	return t3;	
}
bool sbibank::operator > (sbibank t2)
{
	amt>t2.amt?true:false;
	/*if(amt>t2.amt) return true;
	else return false;*/
}
int main()
{
	sbibank o1,o2,o3;
	cout<<"\n Enter data for Object o1: " ;o1.getdata();
	cout<<"\n Enter data for Object o2: "; o2.getdata();
	
	/*o3=o1+o2; // objct o1 is caller object and o2 as a argument pass 
	o3.printdata();*/
	cout<<"\n which rich: o1>o2";
	o1>o2?cout<<"\n Object1 is Rich":cout<<"\n Object2 is Rich";
	return 0;
}
