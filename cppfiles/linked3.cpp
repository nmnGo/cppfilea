#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node( int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

node* Insert(){
        node *head=NULL, *tail=NULL;
        int data;
        while(data!=-1)
       {
        cout<<"Enter Data : ";
        cin>>data;
        cout<<" Type -1 to exit"<<endl;
        node *newnode=new node(data);
        if(head==NULL)
           head=tail=newnode;
        else
        {
        tail->next=newnode;
        tail=newnode;  ///==tail=tail->next;
        }
       }
     return head;
}

node* InsertI(node* head,int pos,int val)
{
if(pos>0)
{
    node* newnode=new node(val);
    node* temp=head;
    pos=pos-1;
    while(pos--)
    {
     temp=temp->next;
    }
    node* k=temp->next;
    temp->next=newnode;
    newnode->next=k;

}

    return head;
}

void Display(node *head){
  node *temp=head;
   while(temp!=NULL)
     {
      cout<<temp->data<<"->";
      temp=temp->next;
     }
}


int main()
{
    int a,ch;
    cout<<"What do you want to do ? \n 1.Insert Element \n 2.Delete Element \n 3.Show linked List \n 4. Exit";
    cin>>ch;
    node *head=Insert();
    Insert();
    cout<<"\ndisplay:\n";
    Display(head);
cout<<"enter pos and value ";
int pos ,val;
cin>>pos>>val;
    InsertI(head,pos,val);

     Display(head);
return 0;
}
