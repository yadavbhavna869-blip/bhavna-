#include<iostream>

using namespace std;
int main()
{
	cout<<"\n enter even number m to n:";
	int i,m,n,f;
	cin>>m>>n;
 cout<<"\n print even number form:"<< m <<" to "<< n<<"\n";
 for(i=m;i<=n;i++)
 {
 	f=2; // initialiazation
 	while(f<i) // condition
 	{
 	if(i%f==0)  // loop sts
 			break; // loop st
	f++; //updation 
	}
if(f==i)
	cout<<i<<"\t";
}
 return 0;
 } 
