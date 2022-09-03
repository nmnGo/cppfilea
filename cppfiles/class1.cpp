#include<iostream>

using namespace std;

class student{
    int roll;                   //access to class only since by default it is private
public :                        //access specifier that specifies if something is accessible outside the class
    int age;

    void getRoll(int a)
    {
        roll=a;
    }
    void display()
    {
        cout<<roll<<"  "<<age<<endl;
    }
};

int main()
{
    student s1;           //statically creating an object of class
    student *s2=new student;            //Dynamically making an object of class
    int a,b;

    cout <<"enter age of student of both \n";
    cin>>s1.age>>(*s2).age;
    cout<<"Enter roll no of both student"<<endl;
    cin>>a>>b;
    s1.getRoll(a);
    (*s2).getRoll(b);

    s1.display();
    s2->display();
delete(s2);
return 0;
}
