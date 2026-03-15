#include<iostream>
using namespace std;
int main()
{
	int d,y,m,w,remaining;
	cout<<"\n enter  days:";
	cin>>d;

	y=d/365;
	int remaining=d%365;
	
	m=remaining/30;
	remaining= remaining%30;
	
 w=remaining/7;
	

	cout<<"\n  years:"<<y;
	cout<<"\n  months:"<<m;
cout<<"\n  weeks:"<<w;

	return 0;
	
}
//	cout<<"\n days convert into year:"<<y;
	//cout<<"days convert into month:"<<m
