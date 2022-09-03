#include<iostream>
#include<math.h>

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
        int data;
        node*tail,*head=NULL;
        cout<<"Press -1 to Exit"<<endl;
        while(data!=-1)
       {
        cout<<"Enter Data : ";
        cin>>data;
        node *newnode=new node(data);

        if(head==NULL){
           head=tail=newnode;
        }
        else
        {
        tail->next=newnode;
        tail=newnode;  ///==tail=tail->next;
        }

       }

     return head;
}

void Display(node *head){
  node *temp=head;
  cout<<endl;
   while((temp!=NULL))
     {
     if(temp->data!=-1)
      cout<<"->"<<temp->data;

      temp=temp->next;
     }
}
node* deleteMid(node* head)
{
    node*fast=head->next,*slow=head;
    if(head!=NULL&&head->next!=NULL)
    {
    while(fast!=NULL&&fast->next!=NULL)
    {

        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
    slow->data=slow->next->data;
    slow->next=slow->next->next;

    }
    return head;

    // Your Code Here
}

node* DeleteMid(node* head)
{
    node*fast=head->next,*slow=head;
    int len=0;
    if(head!=NULL&&head->next!=NULL)
    {
    while(fast!=NULL&&fast->next!=NULL)
    {

       len++;
        fast=fast->next->next;
    }
     cout<<len;
    while(len--)
    {
        slow=slow->next;
    }

    slow->data=slow->next->data;
    slow->next=slow->next->next;
    }
    return head;

    // Your Code Here
}

node* Rotate(node* head, int k){
        int n=0;
        node *temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
            n++;
        }
       cout<<endl;
        node*temp1=head;
        temp->next=head;
        int i=n-k-1;

        while(i--)
        {
            temp1=temp1->next;
        }

        head =temp1->next;
        temp1->next=NULL;

    return head;
    }

int main(){

    int ch=0;
    node *head=Insert();
    system("cls");
     Display(head);
    //head= Rotate(head,3);
    head=DeleteMid(head);
     Display(head);

  //clearing the allotted memory
while(head!=NULL){
node *temp=head->next;
delete(head);
head=temp;
}
return 0;
}
