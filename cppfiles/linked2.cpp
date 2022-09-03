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

void Display(node *head){
  node *temp=head;
   while(temp!=NULL)
     {
      cout<<temp->data<<"->";
      temp=temp->next;
     }
}
void Delete(int a){
}


int main()
{
    int a,ch;
    cout<<"What do you want to do ? \n 1.Insert Element \n 2.Delete Element \n 3.Show linked List \n 4. Exit";
    cin>>ch;
    node *head=Insert();

    switch (ch){
      case 1:    Insert();
            break;
        case 2:cout<<"Enter number to be deleted /n";
        cin>>a;
        Delete(a);
            break;
        case 3:Display(head);
            break;
         case 4:
         return 0;
         break;

    }


}
