#include<iostream>
using namespace std;
class myclass
{
	private:	
	protected:	
	public:		
	void printmsg()
	{
	cout<<"\n Hello c C++: ";	
	}
	void addnumber()
	{   int a,b;
		cout<<"\n enter a number:";
		cin>>a>>b;
		cout<<"\n add number:"<<a+b;
	}
	void subtractnumber()
	{ int a,b;
		cout<<"\n subtraction is:";
		cin>>a>>b;
		cout<<"\n"<<a-b;
	}
	void multiplication()
	{
		int a,b;
	cout<<"\n multiplication number is: " ;
	cin>>a>>b;
	cout<<"\n"<<a*b;
	}
	void divide()
	{
		float a,b,c;
	cout<<"\n divide number:";
	cin>>a>>b;
	c=a/b;
	cout<<"\n"<<c;
	}
	void simpleinterest()
	{
		float s,p,r,t;
	cout<<"\n  enter  a number for simple interest :";
	cin>>p>>r>>t;
	s=p*r*t/100;
	cout<<"\n  simple interest is:"<<s;
	}
	void swapvalues()
	{ int a,b;
		cout<<"swaping the number";
		cin>>a>>b;
		a+b;
        a-b;
        b-a;
	cout<<"a is "<<b<<" b is "<<a;
	}
	void  swpingnumber()
	{  int a,b,c;
		cout<<"\n swaping number using third varible:";
		cin>>a>>b;
		c=a+b;
		c=a-b;
		c=b-a;
	
		cout<<"\n a is "<<b<<" b is "<<a;
	}
	  void submarks()
	  {
	  	int total,h,e,p,m,s,t;
	  	float avg;
	  	cout<<"enetr a  five subject number:";
	  	cin>>h>>e>>p>>m>>s;
	  	total =h+e+p+m+s*100/500;
	  	avg=total/5;
	  	cout<<"\ntotal marks:"<<total<<"\navg marks:"<<avg;
	  														}                                                      
	     void rediusofcircle()
		 {
		 float d,c,a,r;
		  cout<<"\n enter a number for diameter circumference area:";
		  cin>>r;
		  d=2*r;
		  c=2*3.14*r;
		  a=3.14*r*r;
		  cout<<"\n diametre is:"<<d<<"\n circumference:"<<c<<"\narea:"<<a;	}                                               
	void chnagecase()
	{
		char ch;
		cout<<"\n enetr a character:";
		cin>>ch;
		if(ch>='A'&&ch<='Z')
		{
		ch+32;
		cout<<"\n upercase:"<<ch;
		}
		else if(ch>='a'&& ch<='z')
		{
			ch-32;
			cout<<"\n lowercase:"<<ch;
		}
	}
	void convertlgthcm()
	{
		int l,m,km,cm;
		
		cout<<"\n enetr a length in cm:";
		cin>>cm;
	    m=cm/100;
	    km=cm/100000;
		
		cout<<"\n convert meter:"<<m<<"\n km:"<<km;
	}
	void temprature()
	{
		 float f,c;
		cout<<"\n enter a tempraturein celsius:";
		cin>>c;
		f=(c*9/5)+32;
		cout<<"\n convert fahrenheit:"<<f;
	}
	void tempraturecelsius()	
   {
   float f,c;
   cout<<"\n enetr a temprature fahrenheit:";
   cin>>f;
   c=5/9*(f-32);
   cout<<"\n convert celcius:"<<c; 
	}
	void convertyears()
	{
		int d,y,m,w;
		cout<<"\n enter  days convert y m w:";
		cin>>y>>m>>w;
		d=y/365;
		d=w/7;
		d=m/28;
		cout<<"convert years:"<<y<<"\nweek"<<w<<"\nmonth";
	}
};
 int main()
 {
  myclass ob1;
  //ob1.prin tmsg();
  //ob1.multiplication();
 // ob1.divide();
// ob1.simpleinterest();
 //ob1.swpingnumber();
 //ob1.submarks();
//ob1.rediusofcircle();
//ob1.chnagecase();
 //ob1.convertlgthcm();
 //ob1.temprature(); 
 //ob1.tempraturecelsius();
 ob1.convertyears();
return 0;
}
 


