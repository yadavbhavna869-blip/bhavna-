#include<iostream>
using namespace std;
template<class areadt> areadt area(areadt r)
{
	areadt d;
	d=3.142*r*r;
	return d;
}
template < class dt1, class dt2> dt1 sum(dt1 r)
{
	dt1 c;
	c=2*3.142*r;
	return c;
}
int main()
{
	cout<<"\n sum of float value:"<<area(2.0);
//	cout<<"\n sum of int value:"<<sum(10,30);
   //cout<<"\n sum of int value:"<<sum(10,20,30);

}
