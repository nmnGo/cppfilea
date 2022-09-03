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
        int data;
        node*tail,*head=NULL;
        cout<<"Press -1 to Exit"<<endl;
        while(data!=-1)
       {
        cout<<"Enter Data : ";
        cin>>data;
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
  cout<<endl;
   while((temp->data)!=-1)
     {
      cout<<"->"<<temp->data;
      temp=temp->next;
     }
}

node* InsertI(node* head,int pos=1){
cout<<" enter pos and value ";
int val;
cin>>pos>>val;

    node* newnode=new node(val);
    node* temp=head;
if(pos>1){
        pos--;
    while(--pos)
    {
     temp=temp->next;
    }
    node* k=temp->next;
    temp->next=newnode;
    newnode->next=k;
}else if(pos=1){
    head= newnode;
    head->next=temp;
}

    Display(head);
    return head;
}

node* append(node *head){
    cout<<"Enter the pos to be appended in list "<<endl;
    int val,pos;
    node*temp=head;
    cin>>val;
    while(--pos)
{
    temp=temp->next;
}
    cout<<"Enter the value ";
    cin>>val;
    temp->data=val;
    Display(head);
    return head;
}

node* delpos(node *head,node*posnode=NULL){
node *temp=head;
int pos;
cout<<"Enter position to be deleted ";
cin>>pos;
while(--pos)
{
    temp=temp->next;
}
posnode=temp;
temp=temp->next;
posnode->data=temp->data;
posnode->next=temp->next;
delete(temp);
Display(head);
return head;
}

node* delval(node *head){
    cout<<"Enter the value to be deleted from list "<<endl;
    int val;
    node*temp=head;
    cin>>val;
    while(temp->data!=val)
{
    temp=temp->next;
}
delpos(head,temp);
Display(head);
return head;
}

node *recurI(node *head){

    return head;
}
node *recurD(node *head,int pos=0){

    if(head==NULL)
    {
        return 0;
    }
    else if(pos==0){
    node* temp=head;
    head=head->next;
    delete(temp);
    }
    else{
        recurD(head->next,pos-1);
    }
        return head;
}

int main()
{
    int ch=0;
    node *head=Insert();
    system("cls");
    while(ch!=111)
    {
    cout<<"\n What do you want to do ? \n 1.Insert Element \n 2.Show linked List \n 3.Insert at any position   \n 4.delete at any position ";
    cout<<" \n 5. delete a value \n 6. append value at a position \n ";
    cin>>ch;
        system("cls");
        int pos;
    switch(ch){
     case 1:
            InsertI(head);
            break;
     case 2:Display(head);
            break;
     case 3: head=InsertI(head);
            break;
     case 4: head=delpos(head);
        break;
     case 5: head=delval(head);
        break;
     case 6: head=append(head);
        break;
       case 7: head=recurI(head);
        break;
     case 8:    cout<<"Enter position of to be deleted ";
                cin>>pos;
                head=recurD(head,pos);
                 Display(head);
        break;
    default: ch=111;
      break;

    }
  }
  //clearing the allotted memory
while(head!=NULL){
node *temp=head->next;
delete(head);
head=temp;
}
return 0;
}
