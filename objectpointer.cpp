#include<iostream>
using namespace std;
int main()
{
	int*p=new int;
cout<<"\n enter any value:";
cin>>*p;
cout<<"\n  address of pointer variable:"<<&p;
cout<<"\n address of pointer variable or address of dynamic memory block:"<<p;
	cout<<"\n value of dynamic memory block:"<<*p;
	delete p;
	return 0;
}

