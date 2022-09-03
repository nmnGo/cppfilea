#include<iostream>
using namespace std;
//Stack is implemented here as array here
class stackArr   {
    int *data;
    int nexti,capacity;

    public:
    stackArr(int total) //coz here we are applying stack as array we need to speciify size
    {
     data= new int[total];
    nexti=0;
    capacity=total;
   }
    bool isEmpty(){
        return nexti==0;    }

int Size(){
    return nexti;
}
void push(int inp){
if(nexti==capacity){
            cout<<"stack FULL"<<endl;
            return;
            }

    data[nexti]==inp;
    nexti++;
}
void pop(){

if(isEmpty())
    cout<<"Underflow";

nexti--;
//cout<<nexti<<nexti;
cout<<data[nexti];

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

int main()
{
stackArr s1(5);
cout<<s1.top()<<endl;
s1.push(1);
s1.pop();
s1.push(2);
cout<<s1.isEmpty()<<"emp";
s1.push(3);
cout<<s1.top()<<"top";
s1.push(4);
cout<<s1.Size()<<"size\n";
s1.pop();


return 0;

}
