#include<iostream>
#include <iomanip>

using namespace std;
int main()
{
	float p,r,t,si;
	cout<<"\n the value of principle rate,time of a simple interest:";
	cin>>p>>r>>t;
	si=(p*r*t)/100;
	cout<<fixed<<setprecision(2);
	cout<<"\n  simple interest :"<<si;
	return 0;
}
