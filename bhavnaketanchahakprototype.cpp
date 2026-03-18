 #include<iostream>
using namespace std;
class sbibank
{
	private: int amt;
	protected: int ac;
	public:
		
		sbibank()
		{ amt=ac=0;	}
			~sbibank()
		{	ac=amt=-1;		}
		inline void getdata ();
		inline void printdata ();
		friend sbibank sbibankbalance(sbibank,sbibank);
	
		
};
void sbibank::getdata()
{
cout<<"\n enter ac no:";  cin>>ac;
cout<<"\n anter amt:"; cin>>amt;	
}
void sbibank :: printdata()
{
	cout<<"\n print ac no:"<<ac;
	cout<<"\n amount no:"<<amt;
}
sbibank sbibankbalance(sbibank t1,sbibank t2)
{
	
}

int main()
{
	sbibank bhavna,ketan,chahak;
	cout<<"\n deposit amount sbi bhavna a/c:";
	bhavna.getdata();
	cout<<"\n deposit amount sbi ketan a/c:";
	ketan.getdata();
	chahak=sbibankbalance(bhavna,ketan);
	chahak.printdata();
	
	return 0;
	
}
