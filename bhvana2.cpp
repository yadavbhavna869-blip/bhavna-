#include<iostream>
using namespace std;
int sum(int,int,int=0,int p=0);
int main()
{
	cout<<"\n sum of 2 no:"<<sum(10,20);
	cout<<"\n sum of 3 no:"<<sum(10,20,30);
	cout<<"\n sum of 4 no:"<<sum(10,20,30,40);
	return 0;
}

int sum (int p,int q,int r,int s)	
{
	 int a;
	 a=p+q+r+s;
	 return a;
}
