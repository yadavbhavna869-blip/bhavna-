#include<iostream>
using namespace std;
float area(int); // prototype for cicle 
int area(int,int); // prototype for rectangle 
float area(); // prototype for Triangle 
int main(){
	cout<<"\n enter radius " ; int rad; cin>>rad;
	cout<<"\n Cicle Radius is:"<<rad<<" area is:"<<area(rad);
	
	cout<<"\n\n enter length and breadth:"; int l,b; cin>>l>>b;
	cout<<"\n Rectangle is: area is:"<<area(l,b);
	
	cout<<"\nTriangle area is:"<<area();
	return 0;
}
// area define for cicle 
float area(int r)
{
	float a=3.142*r*r;
	return a;
}
// area define for rectangle 
int area(int l, int b)
{
	int a;
	a=l*b;
	return a;
}

// area define for Triangle 
float area()
{
	cout<<"\n\n enter base and height ";
	int b,h; cin>>b>>h;
	float a=0.5*b*h;
	return a;
}


