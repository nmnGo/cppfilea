#include<iostream>

using namespace std;
template<typename T>

class Stack{
T *data;
int nexti;
int capacity;
public:
    Stack(){
        capacity=5;
       data=new T [5];
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
        T *newData=new T[capacity*2];
        for(int i=0;i<capacity;i++)
            newData[i]=data[i];

        capacity*=2;
        delete []  data;
        data=newData;
    }
    data[nexti]=inp;
    nexti++;
    }
T pop(){
if(isEmpty())
{
    cout<<"UnderFlow ";
    return 0;
}
    nexti--;
    return data[nexti];
}
 T top(){
     if(isEmpty()){
    cout<<"NO data is availabe ";
    return 0 ;
      }
 else
 return data[nexti-1];
 }
};

int main(){
Stack <char> s1; //Template can be made double ,float
s1.push(100);
s1.push(101);
s1.push(102);
s1.push(103);
s1.push(104);
s1.push(105);

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
