#include<iostream>
using namespace std;
class A
{	public:
	A() {cout<<"\n A cls Constructor";}   
	~A() {cout<<"\n A cls Destructor";}   
	void fa() {cout<<"\n fa() function";	}                                                                                                                                                  
};
class B:virtual public A
{
	private:
	protected:
	public:
	B() {cout<<"\n B cls Constructor";}   
	~B() {cout<<"\n B cls Destructor";}    
	void fb() {cout<<"\n fb() function";	}                                                                                                                                               
};
class C:virtual     public A       
{	public:
	C() {cout<<"\n C cls Constructor";}   
	~C() {cout<<"\n C cls Destructor";}   
	void fc() {cout<<"\n fc() function";	}                                                                                                                                                 
};
class D:public B,public C
{
	private:
	protected:
	public:
	D() {cout<<"\n D cls Constructor";}   
	~D() {cout<<"\n D cls Destructor";} 
	void fd() {cout<<"\n fd() function";	}                                                                                                                                                   
};

int main()
{D ob;
ob.fd();
ob.fc();
ob.fb();
ob.fa();
return 0;
}
