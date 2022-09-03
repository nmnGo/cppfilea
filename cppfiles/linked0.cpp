#include <iostream>
using namespace std;

class node
{
    public:
int data;
node *next;

node(int Data)
{
 data=Data;
 next=NULL;
}

};
void print(node *headP)
{node * temp=headP;              //temp is used so that head is not lost
    while(temp!=NULL)
   {
    cout<<temp->data<<endl;
    temp=temp->next;
   }
}

int main()
{
node n1(5);
node n2(3);
node n3(4);
node n4(7);
node n5(8);

node *head=&n1;
n1.next=&n2;
n2.next=&n3;
n3.next=&n4;
n4.next=&n5;
print(head);


return 0;
}
 /* staticallly understanding LL
node n1(5);
node n2(3);
node n3(4);
node n4(7);
node n5(8);
node *head=&n1;
n1.next=&n2;
n2.next=&n3;
n3.next=&n4;
n4.next=&n5;
print(head);
