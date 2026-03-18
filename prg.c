#include<stdio.h>
using namesapce std;
class number
{
	private:
		int n;
	procted:
	int t;
	public:
	number()
	{
		n=t=0;
		}	
	~number
	{
		n=t= -1;
		}	
	void getdata(){
		cout<<endll<<"enter any number:";
		cin>>n;
	}
	void showdata()
	{
		cout<<"\n number:"<<n<<"\t:"<<t;
	}
	inline void evenadd();
	inline void prim()
	inlin void armstrong();
	inline void palindrom();
	
  } ; 
