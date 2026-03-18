#include<iostream>
using namespace std;
class complex
{
	private:
	int a;
	
	protected:
	int b;	
		
	public:
	void getdata()
	{
		cout<<"\n enter value od a&b:";
		cin>>a>>b;
	}
	void printdata()
	{
		cout<<"\n a:"<<a<<"\t b:"<<b;
	}
 friend void myfriend(complex);
 
};
void myfriend(complex obj2)
	{
 	 cout<<"\n a:"<<obj2.a<<"\t b:"<<obj2.b;

}
int main()
{
	complex ob1;
	cout<<"\n enter data for obeject1:";
	ob1.getdata();
	cout<<"\n print obeject1 data:";
	ob1.printdata();
    cout<<"\n print data using friend:";
    myfriend(ob1);
    
	
	
	
	return 0;
}
