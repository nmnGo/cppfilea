
#include<iostream>
using namespace std;
//Working Dynamic array implementation of stack
class Stack{
int *data;
int nexti;
int capacity;
public:
    Stack(){
        capacity=5;
       data=new int [5];
       nexti=0;
    }
    int len(){
    return nexti;
    }
    bool isEmpty(){
    return nexti==0;
    }
    void push(int inp){
    if(nexti==capacity){
        int *newData=new int[capacity*2];
        for(int i=0;i<capacity;i++)
            newData[i]=data[i];

        capacity*=2;
        delete []  data;
        data=newData;
    }
    data[nexti]=inp;
    nexti++;
    }
int pop(){
if(isEmpty())
{
    cout<<"UnderFlow ";
    return 0;
}
    nexti--;
    return data[nexti];
}
 int top(){
     if(isEmpty()){
    cout<<"NO data is availabe ";
    return 0 ;
      }
 else
 return data[nexti-1];
 }
};

int main(){
Stack s1;
s1.push(10);
s1.push(20);
s1.push(30);
s1.push(40);
s1.push(50);
s1.push(560);

cout<<s1.top()<<endl;
cout<<s1.pop()<<endl;
cout<<s1.pop()<<endl;
cout<<s1.pop()<<endl;

cout<<s1.len()<<endl;
cout<<s1.top()<<endl;
cout<<s1.isEmpty();

cout<<s1.pop()<<endl;
cout<<s1.pop()<<endl;
cout<<s1.pop()<<endl;
cout<<s1.top()<<endl;
cout<<s1.isEmpty()<<endl;
cout<<s1.pop();
return 0;
}
