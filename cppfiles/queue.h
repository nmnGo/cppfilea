template<typename T>
class node
{
    public:
        T data;
        node<T>*next;

        node(int data)
        {
            this->data=data;
            next=NULL;
        }
};
template <typename T>
class Queue{
 node<T> *head;
node<T> *tail;

 public:
     Queue()
     {
         head=NULL;
         tail=NULL;
     }
     bool isEmpty(){
     return head==NULL;
     }
     void push(T ele){
         node<T>  *temp=new node<T>(ele);
         if(isEmpty())
            head=tail=temp;
         else
         {
          tail->next=temp;
          tail=temp;
         }
     }
     T Front(){
         if(isEmpty())
            return 0;
         return head->data;
     }
     T dequeue(){
     if(isEmpty())
     {
         cout<<"UnderFlow";
         return 0;
     }
     T ans=head->data;
     node<T>*temp=head;
     head=head->next;
     delete temp;
     return ans;
     }
};
