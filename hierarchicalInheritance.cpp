#include<iostream>
using namespace std;
class A
{	public:
	A() {cout<<"\n A cls Constructor";}   
	~A() {cout<<"\n A cls Destructor";}  
	void fa() {cout<<"\n fa() function";	}                                                                                                                                                      
};
class B:public A
{
	private:
	protected:
	public:
	B() {cout<<"\n B cls Constructor";}   
	~B() {cout<<"\n B cls Destructor";} 
	void fb() {cout<<"\n fb() function";	}                                                                                                                                                   
};
class C:public A
{	public:
	C() {cout<<"\n C cls Constructor";}   
	~C() {cout<<"\n C cls Destructor";} 
	void fc() {cout<<"\n fc() function";	}                                                                                                                                                    
};
int main()
{C ob;
return 0;
}
