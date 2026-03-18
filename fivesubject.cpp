#include<iostream>
using namespace std;
int main()
{
	float m,p,c,h,e,total,percent;
	cout<<"\n enter five subject marks:";
	cin>>m>>p>>c>>h>>e;
  if(m>=35 && p>=35&&c>=35&&e>=35)
	{
		cout<<"\n pass";
	}
	else{
		cout<<"\n fail";
	}
    total=m+p+c+h+e;
  cout<<"\n total marks is"<<total;
  percent=total/100;
  cout<<"\n percent is"<<total;
	return 0;
}
