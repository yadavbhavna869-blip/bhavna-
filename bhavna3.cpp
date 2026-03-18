#include<iostream>
using namespace std;
float into(float,float);
float into(float,float,float);
float into(float,float,float,float);
int main()
{
	cout<<"\n into of  2no:"<<into(20,30);
	cout<<"\n into of 3no:"<<into(20,40,50);
	cout<<"\n into of 4no:"<<into(20,40,50,60);
	return 0;
}
float into( float r)
{
	float d=2*r;
	
	return d;
}
float into(float r,float=0)
{
	float c=2*3.142*r;
   return c;
}
float into ( float r,float z=0,float y=0)
{
	return 3.142*r*r;
	
}
 
 

