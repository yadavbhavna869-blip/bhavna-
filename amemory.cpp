#include<iostream>
using namespace std;
 class complex
 {
 	private:
 	 int a;
 		
 protected:
 	int b;
 	
 	public:
 	void welcome()
	 {
	cout<<"\n happy dipawali:"; }
		
	complex() {cout<<"\n welcome:";
}
	~complex()
		 	{
		 		cout<<"\n by";
			 }
			 void getdata();
	void showdata()
	{
		cout<<"\n a:"<<a<<"\t b:"<<b;
	}
		 
 };
 void complex:: getdata()
 {
 	cout<<"\n value of dm:";
 	cin>>a>>b;
 }
int main()       
{
	complex oc1;
	cout<<"\n memory of oc1:"<<sizeof(oc1);


		oc1.showdata();
		complex oc2;
		cout<<"\n enter data for oc2:";
		oc2.getdata();
	return 0;
}
