#include<iostream>
using namespace std;
int main()
{
	cout<<"\n print palindorm number m to n:";
	int m,n,t,r,p;
	cin>>m>>n;
	cout<<endl<<"print plaindorm number from:"<<m<<" to "<<n<<endl;
	for(;m<=n;m++)
	{
	t=m;
	p=0;
	while(t>0)
	{
		r=t%10;
		p=p*10+r;
		t/=10;
	}
	if(m==p)
	cout<<p<<"\t";
}
	 return 0;
}
