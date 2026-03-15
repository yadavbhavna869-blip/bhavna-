#include<iostream>
using namespace std;
int main()
{
	float*p=new float;
	cout<<"\n enter any value:";
	cin>>*p;
	cout<<"\n address of pointer varible:"<<&p;
	cout<<"\n adress of pointer varible of dynamic block:"<<p;
	cout<<"\n value of dynamic memory block:"<<*p;
	delete p;
	return 0;
}
