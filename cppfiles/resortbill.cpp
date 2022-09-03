#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

fstream f,f1;                                     //password //quantity //are you sure or want to edit it
class resort
{
    int idx;
    string name;
    float cost,dis,qty;
public:
    void admin();
    void write();
    void display();
    void modify();
    void del();
    void menu();
    void order();

};

void resort::admin()
{
    system("cls");
    cout<<"\nHi admin\n";
    int ch;
    cout<<"\t\n\n\n 1. Add a new PRODUCT ";
    cout<<"\t\n\n\n 2. Display Every Available Product ";
    cout<<"\t\n\n\n 3. ";
    cout<<"\t\n\n\n 4.";
    cout<<"\t\n\n\n 5.";
    cout<<"\t\n\n\n 6.";
    cout<<"\t\n\n\n 7.";
    cout<<"\t\n\n\n 8.";
    cin>>ch;
    switch(ch)
    {
        case 1: write();
            break;
        case 2: display();
            break;
        case  3:
            break;
        case  :
            break;
        case  :
            break;
        case  :
            break;
        case  :
            break;
    }

}

void resort::write()
{
    system("cls");
f.open("resort.txt",ios::out|ios::app);
cout<<"Enter the index number ";
cin>>idx;
cout<<"Enter name of prduct ";
cin>>name;
cout<<"Enter price ";
cin>>cost;
cout<<"Enter discount %";
cin>>dis;
f<<" "<<idx<<" "<<name<<" "<<cost<<" "<<dis;
f.close();
cout<<"Product is created ";
getch();
}

void resort::display()
{
    system("cls");
    cout<<"All the available products are here ";
    f.open("resort.txt",ios::in);
    if(!f)
    {
        cout<<"No RECORD FOUND ";
        getch();
        admin();
    }
    f>>idx>>name>>cost>>dis;
    while(!f.eof())
    {
        cout<<"\n\nProduct index is "<<idx;
        cout<<"\nProduct name is "<<name;
        cout<<"\nProduct cost is "<<cost;
        cout<<"\nProduct discount is "<<dis<<"%";
        f>>idx>>name>>cost>>dis;
    }
    f.close();
    getch();
}


void resort::order()
{
cout<<"\t\t\t\t  Hi customer  ";
int order[20],a=0,qty[10];
float amt=0,total=0;
char ch='n';
f.open("resort.txt",ios::in);
if (f)
    {
    f.close();
    menu();
    cout<<"\n\n PLACE YOUR ORDER ";
    do
    {
        cout<<"Enter the index of product/service\n ";
        cin>>order[a];
        cout<<"Quantity?\n";
        cin>>qty[a];
        a++;
        cout<<"Do you want to continue to take our Services ? \n Press 'Y' to continue\n";
        cin>>ch;
    }while(ch=='y'||ch=='Y');
    cout<<"\t\t\t\t\n WE ARE PLEASED TO HAVE YOU ";
    getch();

    for(int i=0;i<=a;i++)
    {
    f.open("resort.txt",ios::in);
    f>>idx>>name>>cost>>dis;
    while(!f.eof())
    {
        if(idx==order[i])
        {
            amt=cost*qty[i];
            total+=amt;
        }
        f>>idx>>name>>cost>>dis;
    }
    f.close();
    }
        cout<<"Total ="<<total;
        getch();
    }
}

void resort::menu()
{
    system("cls");
    f.open("resort.txt",ios::in);
    cout<<"Menu ";
    f>>idx>>name>>cost>>dis;
    while(!f.eof())
    {
        cout<<idx<<"  "<<name<<"  "<<cost;
        f>>idx>>name>>cost>>dis;
    }
    getch();
    f.close();
}


int main()
{
    resort r;
    int ch;
    bool Exit=true;
    while(Exit)
    {
        system("cls");
    cout<<"\n\n MAIN Interface  ";
    cout<<"     \n          \t\t  \n 1.   Admin ";
    cout<<"     \n          \t\t  \n 2.   Customer ";
    cout<<"     \n          \n \n\n\n \n\n\t\t Exit\n\n";
    cin>>ch;
    if(ch==1)
            r.admin();
    else if(ch==2)
            r.order();

    else
         Exit=false;
    }
return 0;
}
