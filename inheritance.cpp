#include<iostream>
using namespace std;
class basecls
{
	private:
		int a;
		protected:
		int b;	
	public:
		int c;
	void getdata()
	{
		cout<<"\n enter three data !";  cin>>a>>b>>c;
	}
	void showdata()
	{
		cout<<"\n a:"<<a<<"\t b:"<<b<<"\tc:"<<c;
	}
};
class derivedcls:private basecls
{
		private:
		int x;
		protected:
			int y;
	public:
		int z;
			void getdata()
	{
		cout<<"\n enter three data !";  cin>>x>>y>>z;
	}
	void showdata()
	{
		cout<<"\n x:"<<x<<"\t y:"<<y<<"\tz:"<<z;
			cout<<"\n b:"<<b<<"\tc:"<<c;
			//cout<<"\n A:"<<a<<"\t b:"<<b<<"\tc:"<<c;
	}
		
};
int main()
{
 basecls ob1;
 cout<<"\n memory of Base class object: "<<sizeof(ob1)<<" Byte";
 cout<<"\n Base cls ob1 objects Data: "; ob1.showdata();
  derivedcls od1;
 cout<<"\n\n memory of derived class object: "<<sizeof(od1)<<" Byte";
 cout<<"\n derived cls od1 objects Data: "; od1.showdata();
 	return 0;
}
