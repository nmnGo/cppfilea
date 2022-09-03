#include<iostream>
#include<vector>
using namespace std;
///Vector is nothing but a dynamic array
int main()
{
vector<int> v;  //vector is template int tells the type of data
///vector <int> *v=new vector<int> is dynamically creating a vector

v.push_back(10);
v.push_back(20);
v.push_back(30);//push back add elements back to back

cout<<v[0]<<endl; //i can also say v[0]=100 TO UPDATE or ADD v[0]
cout<<v[1]<<endl;
cout<<v[2]<<endl;

cout<<'"'<<v.size()<<'"'<<endl;

v[3]=100;
v.push_back(21);

cout<<v[3]<<endl; //prints 21 since line 18 statement is valid to update only and not add so it isnt considered
cout<<v[4]<<endl; //prints garbage
cout<<" at"<<v.at(3);

//cout<<" at"<<v.at(6); gives error that it is out of range
///at tells that something asked is out of range
cout<<'"'<<v.size()<<'"'<<endl; //however capacity of vector doubles every time it crosses certain limit (0-1-2-4-8-16-32 .....)

v.pop_back();//pops out last element





return 0;
}
