#include<iostream>
using namespace std;
class   abstractcls //basecls
{
	private:

	protected:
	public:
			
	//virtual datatype purevirtualfunctionname(data type)=0;
	virtual void myvirtualfun()=0;
};
class derivedcls: public abstractcls 
{
	public:

	protected:
	public:
	void f1(){cout<<"\n derived cls f1o:";}	
  void myvirtualfun(){cout<<"\n pure virtual:";}
};
int main()
{
   //abstractcls a;  //object create
	derivedcls b;
	
	
}
