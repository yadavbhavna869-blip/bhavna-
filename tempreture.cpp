#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float f,c;
	cout<<"\n  enter tempreture in celsius:";
	cin>>c;
	f=(c*9/5)+32;
		cout<<fixed  << setprecision(2);

	cout<<"\n convert fahrenheight:"<<f;
	return 0;
}
