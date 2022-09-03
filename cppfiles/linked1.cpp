 #include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node( int data)
    {
        this->data=data;//this is used coz both data members are same so data is interpreted from this func and not class
        this->next=NULL;
    }

};



node* Insert(){
    ///Why node* and not node type?
    //basically before func we write the retun type of funcs ..int,char,classname,bool etc ..Here,
    //node would mean it is returning a data member of this class while truth is it will return pointer
    //pointer means * so it states it return a pointer to node
    node *head=NULL;
     int data;
     while(data!=-1)
     {
        cout<<"Enter Data : ";
        cin>>data;
        cout<<endl<<" Type -1 to exit"<<endl;
        node *newnode=new node(data);
       if(head==NULL)
           head=newnode;
        else
        {
            node *temp=head;
          while(temp->next!=NULL){
            temp=temp->next;
          }
            temp->next=newnode;
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
      node *head=Insert();

        cout<<"What do you want to do ? \n 1.Insert Element \n 2.Delete Element \n 3.Show linked List \n";
        cin>>ch;
    switch (ch){

        case 1:cout<<"Enter number to be inserted \n";
        cin>>a;
        Insert();
            break;
        case 2:cout<<"Enter number to be deleted \n";
        cin>>a;
        Delete(a);
            break;
        case 3:Display(head);
            break;
        case -1 :break;
    }

return 0;
}
