#include<iostream>
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
	void showdata()
	{
		cout<<"\n number:"<<n<<"\t:"<<t;
	}
	inline void evenadd();
	inline void prime();
	inline void armstrong();
	inline void palindrom();
	
  } ; 
  
  int main()
  {
  int choice;
  
  while(true)
  {
  cout<<"\n = = = choice= = =\n
  press1: to check even\odd\n:
  press2: to checkprime or not prime:
  press3: to check armstrongh or not armstrongh:
  press4: to check palindrom or not palindrom:";
  
  cout<<"\n enter your choice:";
  cin>>choice;
  switch(choice)
  {
  case 1:
  cout<<"\n check given no. even or odd:";
  break;
   case 2:
  cout<<"\n check given no. prime or not prime:";
  break;
    case 3:
  cout<<"\n check given no. armstrongh or not armstrongh:";
  break;
    case 4:
  cout<<"\n check given no. palindrom or not palindrom:";
  break;
  default:
   cout<<"\n you enter invalid choice try again:";

}
}
  return 0;
}
