 #include<iostream>
 using namespace std;
 class sbibank
 {
 	private:
 	int amt;
 	protected:
 	int ac;
 	public:
 sbibank() {amt=0; ac=0;}	
~sbibank () {amt=-1;ac=-1;}
inline void getdata();
inline void printdata();
sbibank sum(sbibank);
 };
 void sbibank:: getdata()                                                            
 {
 	cout<<"\n enter ac no:";  cin>>ac;
 	cout<<"\n enter amt:";  cin>>amt;
 }
  void sbibank::printdata()
{
	cout<<"\n enter ac no:";  cin>>ac;
	cout<<"\n enter amt:";  cin>>amt;
}
sbibank sbibank::sum(sbibank t1)
{
sbibank t2;
t2.amt=amt+t1.amt;
t2.ac=3;
return t2;	
}
 int main()
 {
 	sbibank ok,ob;
 	cout<<"\n enter value for ok object:";
 	ok.getdata();
 	cout<<"\n enter value for ob object:";
 	ob.getdata();
 	cout<<"\n print ok object data:";
 	ok.printdata();
 	sbibank oa;
 	//oa=ok+ob;
 	oa=ok.sum(ob);
 	oa.printdata();
 	
 	
 	
 	
 	
 	
 	
 	return 0;
 	
 }

