#include<iostream>
using namespace std;
float area(int);
int area(int,int);
float area(float,float);
int main(){
	cout<<"\n area of 2 no:"<<area(2);
		cout<<"\n enter radius of circle to area of circle:";    int r;   cin>>r;
	cout<<"\n radius:"<<r<<"area of circle:"<<area(r);
	cout<<"\n area of 3 no:"<<area(2,3);
	cout<<"\n area of 4 no:"<<area(2,3);
	return 0;
}
float area(int r)
{
	float radius=3.142*r*r;
	return radius;
}
/*/
int area(int l,int b)
{
	cout<<"\n input rectangle:";
	cin>>l>>b;
	float rectangle=l*b;
	return rectangle;
}
float area(float b,float h)
{
	cout<<"\n input triangle";
	cin>>b>>h;
	return 1/2*b*h;
}//
