#include<iostream.>
using namespace std;
class number
{
private:
int n;

protected:
int m;
public:
void showdata(){
cout<<"\n m:"<<m<<"\t n:"<<n;}
void getdata()
{
cout<<"\n enter two values:";
cin>>m>>n;
}
	
	
};
int main()
{

number bhavna;
cout<<endl<<"reserve memory of number class bhavna object is:"<<sizeof(bhavna);
cout<<"\n print bhavna objext data:\n";
bhavna.showdata();
cout<<"\n ener data for bhavna:\n";
bhavna.getdata();
cout<<"\n print data:\n";
bhavna.showdata();

	
	
	return 0;
}
