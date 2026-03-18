#include<iostream>
using namespace std;
int main()
{
	cout<<"\n enter any value:";
	int x; cin>>x;
	int &y=x;
	cout<<"\n value of x:"<<x;
	cout<<"\n address of x:"<<&x;
	cout<<"\n address of reference variable y:"<<&y;
	return 0;
}
