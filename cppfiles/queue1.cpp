#include<iostream>
using namespace std;

template<typename T>
class Queue
{
    T* data;
    int fr, next,len,capacity;
public:
    Queue(int s)
    {
        data=new T[s];
        fr=-1;
        next=0;
        len=0;
        capacity =s;
    }
    int Size()
{
    return len;
}
    bool isEmpty()
    {
        return len==0;
    }
    T Front()
    {
        if(!isEmpty())
            return data[fr];
        return  0;
    }

    void push(T ele){
        if(len==capacity)
        {
            cout<<"queue is full'"<<endl;
            return;
        }
    data[next]=ele;
    next=(next+1)%capacity;//chacking if next=capacity
    if(fr==-1)
    fr=0;
     len++;
    }


T dequeue()
{
    if(isEmpty())
    {
        cout<<"empty queue";
        return 0;
    }
    T ans=data[fr];
    fr=(fr+1)%capacity;
    len--;
    if(len==0)
    {
        fr=-1;
        next=0;
    }
    return  ans;
}

};
int main()
{
    Queue<int> q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(55);
    q.push(66);
    q.push(51);

    cout<<q.Front()<<endl;
    cout<<q.isEmpty()<<endl;

    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    q.push(44);
     q.push(20);
    q.push(30);
    q.push(55);
     cout<<q.dequeue()<<endl;
     cout<<q.dequeue()<<endl;

    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;

return 0;
}
