#include<iostream.h>
#include<process.h>
struct Node
{
  int info;
  Node*next;
}*front,*newptr,*save,*ptr,*rear;
Node * Create_new_node(int);
void insert(Node*);
void display(Node*);
void DelNode_Q();
int main()
{ clrscr();
	front=rear=NULL;
	int inf;
	char ch='y';
	while(ch=='y'|| ch=='Y')
	{
		cout<<"\nEnter Information for the new node...";
		cin>>inf;
		newptr=Create_new_node(inf);
		if(newptr==NULL)
		{
		cout<<"\n Cannot create new node!!Aborting!!\n";
		exit(1);
		}
		insert(newptr);
		cout<<"\nPress to enter more nodes,N to exit...\n";
		cin>>ch;

	}
	system("cls");
	do
	{
		cout<<"\n The Linked-Queue now is(front...to...rear):\n";
		display(front);
		cout<<"Want to delete first node?(y/n)...";
		cin>>ch;
		if(ch=='y'||ch=='Y')
		DelNode_Q();
	}while(ch=='y'||ch=='Y');
	return 0;
	}
	Node * Create_new_node(int n)
	{
		ptr=new Node;
		ptr->info=n;
		ptr->next=NULL;
		return ptr;
	}
	void insert(Node* np)
	{
	 if (front==NULL)
	 front=rear=np;
	 else
	 {rear->next=np;rear=np;}
	}
	void DelNode_Q()
	{
		if (front==NULL)
		cout<<"\n UNDERFLOW!!!\n";
		else
		{ ptr=front;
		  front=front->next;
		  delete ptr;
		}
	}
	void display(Node* np)
	{
		while(np!=NULL)
		{
			cout<<np->info<<"->";
			np=np->next;
		}
		cout<<"!!!\n";
	}


