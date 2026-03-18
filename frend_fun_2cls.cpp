#include<iostream>
using namespace std;
class hdfcbank; // class declaration
class sbibank
{
	private: int amt;
	protected: int ac;
	public:
		friend void totalamt(sbibank,hdfcbank); 
		
		sbibank()// constrauctor
		{
			cout<<"\n Input data by default constructor";
			cout<<"\t Enter amount: ";
			cin>>amt; ac=0; 
		}
			~sbibank()// destrauctor
		{
			cout<<"\n print data by desstructor\t amout:"<<amt;
			ac=amt=-1;
		}	
};
class hdfcbank
{
	private: int bal;
	protected: int an;
	public:
		friend void totalamt(sbibank,hdfcbank); 
		hdfcbank()// constrauctor
		{
			cout<<"\n Input data by default constructor";
			cout<<"\t Enter amount: "; 
			cin>>bal; an=0; 
		}
			~hdfcbank()// destrauctor
		{
			cout<<"\n print data by desstructor\t amout:"<<bal;
			an=bal=-1;
		}
};
 void totalamt(sbibank sb,hdfcbank hb)
 {
  cout<<"\n Bhavna Sbi Bal:"<<sb.amt<<"\t Hdfc Bal:"<<hb.bal
  <<"\t Total Amout:"<<sb.amt+hb.bal;	
} 
int main()
{// FIFO-Queuse- constrctor   LIFO-Stack-destrctor 
	cout<<"\n deposit amount sbi  bhavna a/c:";
	sbibank sbi_bhavna;
	cout<<"\n deposit amount hdfc  bhavna a/c:";
	hdfcbank hdfc_bhavna;
	cout<<"\n print total Bhavna Ac bal: ";
	totalamt(sbi_bhavna,hdfc_bhavna);
	return 0;
}
