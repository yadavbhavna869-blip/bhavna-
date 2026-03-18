 #include<iostream>
 using namespace std;
 template<class dt> class complex
 {
 	private:
 		dt x;
 	protected:
 		dt y;
 		
 	public:
 		void getdata()
 		
 	{
 		cout<<"\n enter data :";
 		cin>>x>>y;
 		
	 }
	 void showdata()
	 {
	 	cout<<"\n:"<<x<<"\t"<<y;
	 }
	 
	 
	 };
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
	 
	 
	 
 	 int main()
 {
 	complex<int> ob1;
 	cout<<"\n enter any two integer value for obj1:";
 	ob1.getdata();
 	cout<<"\nprint ob1 data:";
 	ob1.showdata();
 	
 	complex<string> ob2; 
 	cout<<"\n enter Name and Mobile numer for object2";
 	ob2.getdata();
 	cout<<"\nprint ob2 Name and Mobi no:";
 	ob2.showdata();
 	return 0;
 }
