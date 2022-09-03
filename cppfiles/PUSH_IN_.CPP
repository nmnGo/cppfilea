#include<iostream.h>
#include<stdlib.h>
#include<process.h>
#include<conio.h>
struct node{
	   int info;
	   node *next;
	  }*top,*newptr,*save,*ptr;
node *create_new_node(int n)
{
  ptr=new node;
  ptr->info=n;   ptr->next=NULL;
  return ptr;
}

void push(node* np)
{
   if(top==NULL)
   top=np;
   else
   {
     save=top;
     top=np;
     np->next=save;
   }
}

void display(node* np)
{
   while(np!=NULL)
   {
   cout<<np->info<<"->";
   np=np->next;
  }
}
void main()
{
 int inf;
 char ch='y';
 top=NULL;
 clrscr();
 while(ch=='y'||ch=='Y')
 {
  cout<<"\nEnter information for the new node:";
  cin>>inf;
  newptr=create_new_node(inf);
  if(newptr==NULL)
    {
      cout<<"\nCannot create new node!!!Aborting!!\n";
      exit(1);
    }
  push(newptr);
  cout<<"\nNow the linked stack is:\n";
  display(top);
  cout<<"\npress y to enter new node,n to exit...";
  cin>>ch;
 }
}


