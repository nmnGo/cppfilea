#include<iostream>

using namespace std;

class Student{
int roll;
public:
    int age;
Student(){ cout<<"Con 1 ";}; //constructor - function invoked when object is created .no return or input  .initialise property
Student(int a){roll=a; cout<<"Con 2 ";}//parameterized constructor
Student(int a,int b){roll=a; age=b;cout<<"Con 3 ";}//2nd parameterized constructor

~Student(){
cout<<"Destructor Called";
}//destructor

};

int main()
{
    Student s1,s2(10),s3(11,21);  //Con 1 ,Con 2 ,Con 3
    Student s4(s3);                 //copy constructor is called
    Student S5=s4;                  //copy constructor is called



return 0;
}
