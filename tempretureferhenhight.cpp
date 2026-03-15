#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
float 	f,c;
	cout<<"\n enter tempreture in fehernheight:";
	cin>>f;
	c=(f-32)*5/9;
	cout<<fixed<< setprecision(2);
	cout<<"\n convert celcius~~:"<<c;
	return 0;
}
