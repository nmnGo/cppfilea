#include<iostream>
#include<cstring>
#include<string>

using namespace std;

class College
{
    public :
        string name;
         int cgpa,len;
         long order[10];

int studentin()
{
    cout<<"Enter your name ";
    getline(cin,name);
    len = name.length();

    h :

    cout<<" \n  Enter your CGPA ";
    cin>>cgpa;
    if (cgpa>10)
    {
        cout<<"enter valid cgpa (<10) ";
         goto h;
    }

    return (0);
}
int prefer()
{
    cout<<" Enter the order of preferences(1-10) ";

        for(int i=0;i<10;i++)
                {   cin>>order[i];




                }
    return(0);
}


/*int studentout()
{
    cout<<"Details entered by you are \n";
    cout<<endl<<name<<endl<< cgpa << endl<< order;
return(0); }*/



};


int main ()
{


College c;
    cout<<"Hello Students ..... \n  \n \n                   WELCOME  \n \n  ";
    c.studentin();
    c.prefer();


    return(0);
}



