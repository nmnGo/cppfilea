#include<fstream.h>
#include<process.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
class hotel
{
int rno;
char cname[20];
int ndays;
double amt;
char ckdate[10];
char idproof[15];
void bill()
{
amt= ndays*1000.0;
}
public:
char * getidproof()
{
	return idproof;
}
 hotel()
 {
 rno=0;
 ndays=0;
 amt=0.0;
 }
 void getdata()
 {
 cout<<"\n enter name";
 gets(cname);
 cout<<"\nEnter id";
 gets(idproof);
 cout<<"\n checkin date";
 gets(ckdate);
 cout<<"\n enter room no";
 cin>>rno;
 cout<<"\n enter ndays";
 cin>>ndays;
 bill();
 }
 void display()
 {
 cout<<"\n Customer name:"<<cname;
 cout<<"\n idproof"<<idproof;
 cout<<"\n check in date:"<<ckdate;
 cout<<"\n Room no"<<rno<<"\n no of days of stay"<<ndays;
cout<<"\n total amount payable:"<<amt;
}
};
void custin()
{
char ch='y';
hotel h;
ofstream f("hotel.txt",ios::out|ios::binary|ios::app);
cout<<"\n\t\t\t Welcome to hotel Virat Deoband";
getch();
while(ch=='y'||ch=='Y')
{
cout<<"\nEnter details of customer";
h.getdata();
f.write((char*)&h, sizeof(h));
cout<<"\n customer saved successfuly";
cout<<"\n Want to add more customers?(y/n)";
cin>>ch;
}
f.close();
}
void custout()
{
char id[15];
hotel h;
ifstream f("hotel.txt",ios::in|ios::binary);
f.seekg(0);
cout<<"\n enter id of customer to check out";
gets(id);
cout<<"\n details of customer";
while(f.read((char*)&h, sizeof(h)))
{
if(strcmp(h.getidproof(),id)==0)
{
	h.display();
	break;
}
}
f.close();
cout<<"\n\t\t\t Thanks for staying in hotel Virat Deoband";
}
void custdetails()
{

void main()
{
int ch;
char ch1='y';
while(ch1=='y'||ch1=='Y')
{
clrscr();
cout<<"\n\n\n\t\t\t Welcome to hotel VIRAT";
cout<<"\n 1. New Customer Entry"<<"\n 2. Check out"<<"\n 3. Cutomer Details"<<"\n 4. Exit";
cout<<"\n Enter your choice(1-4)";
cin>>ch;
switch(ch)
{
case 1:  custin();
break;
case 2:  custout();
break;
case 3:
break;
case 4: exit(1);
break;
default: cout<<"\n wrong choice";
}
cout<<"\n Do u want to continue";
cin>>ch1;
}
getch();
}





