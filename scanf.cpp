#include<iostream>
#include<stdio.h>
using namespace std;
int main ()
{
	//cout<<"\n enter two integer value:";
	int a,b,c,r;
	char nm[20];
	//r=	scanf("%d%d",&a,&b);
	//r=	scanf(" %d%d",&a,&b); starting space ignor
//	r=	scanf(" %d %d",&a,&b);starting na d mid space ignor
//	r=	scanf(" %d %d ",&a,&b);starting and mid space ignor bt last required data
//r=	scanf(" %d %d ",&a,&b,&c);starting and mid space ignor bt last required data and nt store in any varaible 
	//r=	scanf("Arjun%d%d",&a,&b); input: Arjun33 22
	//	r=	scanf("=%d?%d",&a,&b);input: =22?33
	//	r=	scanf("Bhavna%dDolly%dKetan",&a,&b);
	//31.10.25
	//r=	scanf("%[1-5] %[6-9]",&a,&b);// read data according to range in character
	//cout<<"\n a:"<<a<<"\t b:"<<b<<"\n scanf return: "<<r;
	//	r=	scanf("%[A-Z] %[a-z]",&a,&b);
	  //printf("\n a: %c \t b:%c\t Return sf %d",a,b,r);
	  //cout<<"\n enter two integer value:";
	  // for name
	  cout<<"\n enter your name:";
	// cin>>nm; //enter data ketan sahu bt store only ketan bcoz sapce dataseperator i.e. read data word to word not space 
	// r=	scanf("%s",&nm);//enter data ketan sahu bt store only ketan bcoz bydefault sapce dataseperator i.e. read data word to word not space 
	// scanf("%[^\n",&nm);// read a lin 
	//	 scanf("%[^\t",&nm);// read multiple until when press Tab key  
		//scanf("%[^]",&nm);// run time error i.e. exception 
		scanf("%[^~]",&nm);// read multiline when press ~
	  cout<<"\n Welcome : "<<nm;
	  return 0;
}
