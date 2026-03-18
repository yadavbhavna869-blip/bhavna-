#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class number
{
	private:
		int n;
	protected:
	int t;
	public:
	number()
	{
		n=t=0;
		}	
	~number()
	{
		n=t= -1;
		}	
	void getdata(){
		cout<<endl<<"enter any number:";
		cin>>n;
	}
	void showdata()//
	{
		cout<<"\n number:"<<n<<"\t:"<<t;
	}
	inline void evenodd();
	inline void prime();
	inline void armstrong();
	inline void palindrom();
	
  } ; 
  void number :: evenodd()
{
	n%2==0?   cout<<endl<<n<<"even number":cout<<endl<<n<<"odd";  
  }
 void number:: prime()
 {
 	for(t=2;t<n;t++)
 	{
 	if(n%t==0)
 {
 	break;
 }
}
n==t?
 cout<<endl<<"prime:":cout<<endl<<n<<"not prime:";
  } 
  void number::armstrong()  	
 {
   
int d,r,a;
for(t=n,d=0;t>0;d++,t/=10);
a=0;
t=n;
while(t>0)
{
	r=t%10;
	a=a+pow(r,d);
	t/=10;
}
a==n?
 cout<<endl<<n<<" armstrongh:":cout<<n<<" not armstrongh:";
}
  int main()
  {
  int choice;
  number ketu;
  cout<<"\n input data for ketu object:";
  ketu.getdata();
  cout<<"\n print data:";
  ketu.showdata();
  
  while(true)
  
  { //system("cls");
  cout<<"\n\n = = = choice= = =\n"
  <<"press1: to check even/odd\n:"
  <<"press2: to checkprime or not prime:\n"
  <<"press3: to check armstrongh or not armstrongh:\n"
  <<"press4: to check palindrom or not palindrom:";
  
  cout<<"\n enter your choice:";
  cin>>choice;
  switch(choice)
  {
  case 1:
  cout<<"\n check given no. even or odd:";
  ketu.evenodd();
  break;
   case 2:
  cout<<"\n check given no. prime or not prime:";
  ketu.prime();
  break;
    case 3:
  cout<<"\n\n check given no. armstrongh or not armstrongh:";
  ketu.armstrong();
  break;
    case 4:
  cout<<"\n check given no. palindrom or not palindrom:";
  break;
  default:
   cout<<"\n you enter invalid choice try again:";

}
}
 getch ();
  return 0;
 
}
