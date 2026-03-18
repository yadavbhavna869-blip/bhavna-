#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int choice,a,b;
	while(123)
	{
		system("cls");
	cout<<"\n===option===";
	cout<<"\n press (1)squence programing skill:";
	cout<<"\n press (2)condition  programing skill:";
	cout<<"\n press (3) selection choice base programing skill:";
	cout<<"\n press (4) iterative control skill:";
	cout<<"\n press (5)jumping control skill:";
	cout<<"\n press (6)modular control skill:";
	cout<<"\n press (7) collection control skill:";
	cout<<"\n press (8)enter your choice:";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"\n squence programing skill:";
			cout<<"\n press (1) print any message on sceen:";
			cout<<"\n press (2) enter  two number:";
			cout<<"\n press (3)add two number:";
			cout<<"\n write a program to input two number";
			cout<<"\n enter your choice:";
		  cin>>choice;
		  switch(choice)
		  {
			case 1:
				cout<<"\n hello c:";
			   	  break ;         
		case 2:
			cout<<"\n enter number:";
			cin>>a>>b;
			cout<<"\n number is"<< a<< b;
			break ;
		case 3:
		cout<<"\n press 1 additon";
		cout<<"\n press 2 subtraction";
		cout<<"\n press 3 multiplication";
		cout<<"\n press 4 division";
		cin>>choice;
		switch(choice)
		{
		case 1:
		cout<<"\n add number";
		cin>>a>>b;
		cout<<"\n  addition is "<<a+b;
		}
			default:	
		cout<<"\n invalid choice try again:";
			
}
	break;	
	
	default:	
		cout<<"\n invalid choice try again:";	
	}
	cout<<"\n do you wnat to continue press enter";
	getch();
}
		
	return 0;
}
	
		

