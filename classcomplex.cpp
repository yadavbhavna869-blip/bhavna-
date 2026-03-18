#include<iostream>
using namespace std;
class complex
{

private:
int a;


protected:
int b;


public:
complex(){ a=b=0;
cout<<"\n default constructor:"; }
~complex(){a=b=-1;
cout<<"\n destructor:";
}
void printdata(){
	cout<<"\n a:"<<a<<"\t b:"<<b;
}
inline void inputdata();

};


void complex::inputdata()
{
	cout<<"\n enter two values:";
	cin>>a>>b;
}






int main()
{
complex ob1;
cout<<"\n print ob1 data:";
ob1.printdata();	
complex ob2;
cout<<"\n enter data for ob2:";
ob2.inputdata();
cout<<"\n print ob2 data:";
ob2.printdata();
complex ob3;
cout<<"\n print ob3 data:";
ob3.inputdata();

	
	return 0;
}
