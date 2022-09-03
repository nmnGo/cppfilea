#include<iostream.h>
#include<conio.h>
#include<conio.h>
#include<process.h>

struct Node {
int info;
Node* next;
} *top,*newptr,*save,*ptr;
Node* Create_New_Node(int);
void push(Node*);
void Display(Node*);
void pop();

void main()
{
top= NULL;
int inf;char ch='y';
while(ch=='y'||ch=='Y')
{
cout<<"\n Enter Information for new node...";
cin>>inf;
newptr= Create_New_Node(inf);

if(newptr== NULL)
{
cout<"\n Cannot create new node!!! Aborting!!\n";
getch();
exit(1);
}
push(newptr);
cout<<"\n Press Y to enter moree nodes ,N to exit...";
cin>>ch;
}
clrscr();
do
{
cout<<"\n the stack now is ";
Display(top);
getch();
cout<<"Want to pop a element";
cin>>ch;
if (ch=='y'||ch=='Y');
pop();
}
while( ch=='y'||ch=='Y');
getch();

}



Node* Create_New_Node(int n)
{
ptr = new Node;
ptr->info=n;
ptr-> next=NULL;
return ptr;
}


void push(Node* np)
{
if (top==NULL) top=np;
else
{
save=top; top=np;
np->next=save;
}
}
void pop()
{
if(top==NULL)
cout<<"underflow!!!!\n";
else
{
ptr=top;top=top->next;
delete ptr;
}
}
void Display(Node* np)
{
while(np!=NULL)
{
cout<<np->info<<"->";
np=np->next;
}
cout<<"!!!\n";
}










