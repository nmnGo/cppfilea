#include<iostream>
using namespace std;
//StacK WITH LINKED LIST--------------------------

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
class stackLL{
node* head;
public:
stackLL(){
head=NULL;
}
  bool isEmpty(){
    return head==NULL;
  }
void push(int inp)
{
      node *newnode=new node(inp);

        newnode->next=head;
        head=newnode;
}
int pop(){
    if(head==NULL)
    {
    cout<<"UnderFlow";
    return 0;
    }
    node*temp=head;
    head=head->next;
    int r=temp->data;
    delete [] temp;
    return r;
}
int top(){
    if(!isEmpty())
    return head->data;
    else
        return -1;
}

void Display()
{
    node*temp=head;
    while(temp!=NULL)
      {
       cout<<temp->data<<"->";
      temp=temp->next;
}
cout<<endl;
}
void deallo()
{
    node*temp=head;
    while(head!=NULL)
    {
        head=head->next;
        delete [] temp;
        temp=head;
    }
}
};

int main()
{
    stackLL s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.Display();
    s.push(40);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;

   s.deallo();
return 1;
}
