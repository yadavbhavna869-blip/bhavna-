 #include<iostream>
 using namespace std;
 class complex
 {
 	private: int x;
 	protected: int y;
 	public: void showdata()
 	{
 		cout<<"\n x:"<<x<<"\ty:"<<y;
	 }
 };
 int main()
 {
 	complex ob1;
 	ob1.showdata();
 	return 0;
 }
