#include<iostream>
using namespace std;
int main()
{
	cout<<"\n enter value of n to m:";
	int i,m,n;
	cin>>m>>n;
	cout<<endl<<"\n print value from:"<<m<<"to"<<n;
	for(i=m;i<=n;i++)
	{
		cout<<"\t"<<i;
	}
	return 0;
}
