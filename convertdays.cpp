#include<iostream>
using namespace std;
int main()
{
	int d,y,m,w;
	cout<<"\n enter a days:";
	cin>>d;

	y=d/365;
	int remaining=d%365;
	
	m=remaining/30;
	remaining= remaining%30;
 w=remaining/7;
	

	cout<<"\n  year:"<<y;
	cout<<"\n  months:"<<m;
cout<<"\n  week:"<<w;

	return 0;
	
}
//	cout<<"\n days convert into year:"<<y;
	//cout<<"days convert into month:"<<m
