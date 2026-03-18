#include<iostream>
using namespace std;
void swap(int a,int);
int main()
{
	cout<<"\n enter swap number:";  int x,y;   cin>>x>>y;
	cout<<"\n before swap x:"<<x<<"\t y:"<<y;
	swap(x,y);
	cout<<"\n after swap fun x:"<<x<<"\t y:"<<y;
	
}
void swap(int p, int q)
{
	cout<"\n in called fun:";
	p=p+q;
	q=p-q;
	p=p-q;
	cout<<"\n in fun : p-x:"<<p<<"\t q-y:"<<q;
}
