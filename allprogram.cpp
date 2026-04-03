#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int choice;
	while(1){
	
	cout<<"\n ==option==";
	cout<<"\npress 1:- sequence choice based programing:";
	cout<<"\npress 2:- decision control based programing:";
	cout<<"\n press 3:- itrative control instruction:";
	cout<<"\n press 4:- switch case control instruction:";
	cout<<"\n press 5:- goto instruction:";
	cout<<"\n enter your choice:";
	cin>>choice;
	switch(choice)
	
	{
	case 1:
	cout<<"\n seuence choice based programing:";
	cout<<"\n press 1: print any message on screen:";	
	cout<<"\n press 2: input a number and print any on screen:";
	cout<<"\n press 3:calculater-:";
	cout<<"\n press 4: print simple interest:";
	cin>>choice;
	switch(choice)	
	{
	case 1:
		int a;
		cout<<"\nwrite a  message:"<<a;
		cin>>a;
	break;
	case 2:
		int b;
		cout<<"enter a number";
		cin>>b;
		cout<<"\n number is"<< b;
	break;
		{
				
	case 3: // *calculater*
	cout<<"\n enter 1: for addtion:";
	cout<<"\n enter 2: for subtraction:";
	cout<<"\n enter 3: for multiplying:";
	cout<<"\n enter 4: for division:";
	cin>>choice;
	switch(choice)
	{
	case 1:
	int a1,b1;
	cout<<"enter a two number for addition :";
	cin>>a1>>b1;
	cout<<"\n addition is: "<< a1+b1;	break;
	
	case 2:
		cout<<"\n enter a  two number for subtraction:";
		cin>>a1>>b1;
		cout<<"\n subtraction is: "<<a1-b1; break ;
	case 3:
		cout<<"\n enter a number for  multiplying:";
		cin>>a1>>b1;
		cout<<"\n multiplaying is:"<<a1*b1 ;
		break;
	case 4:
		cout<<"\n enter a number for division:";
		cin>>a1>>b1;
		cout<<"\n division is:"<<a1/b1;
	}
		}
		
		deafault:

		
		break;
		cout<<"\n invalid choice:";
	}
	
	
	
	
	

}
}
return 0;	
   }
