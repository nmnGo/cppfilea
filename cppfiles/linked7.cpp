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
        while(data!=-1){
        cout<<"Enter Data : ";
        cin>>data;
        node *newnode=new node(data);

        if(head==NULL){
           head=tail=newnode;
        }
        else{
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

node *reversell(node *head)
{
    if(head==NULL||head->next==NULL)
        return head;

        node *smallAns=reversell(head->next);
        node *temp=smallAns;

        while(temp->next!=NULL)
            temp=temp->next;

    temp->next=head;
    head->next=NULL;
    return smallAns;  //time complexity is n^2
}
//To return two pointers we will have to make a class and return its obj to acces both pointers through it .
class Pair {
    public:
    node *head;'
    node*tail;
};

 Pair reverOpti(node *head){
if()
}

int main(){
    int ch=0;
    node *head=Insert();
    //system("cls");
    Display(head);
    head=reversell(head);
  //  cout<<head->data;
    Display(head);
  //clearing the allotted memory ......................................-------------------------.................
while(head!=NULL){
node *temp=head->next;
delete(head);
head=temp;
}

return 0;
}
