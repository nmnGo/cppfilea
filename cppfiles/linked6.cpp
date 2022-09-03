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



int main(){

    int ch=0;
    node *head=Insert();
    node *head1=Insert();
    system("cls");
    Display(head);


  //clearing the allotted memory
while(head!=NULL||head1!=NULL){
node *temp=head->next;
delete(head);
head=temp;
}

return 0;
}
