#include<iostream>
using  namespace std;

#include "queue.h"
int main()
{
    Queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(55);
    q.push(66);
    q.push(51);
    q.push(623);
    q.push(5123);

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
    cout<<q.Front();


return 0;
}
