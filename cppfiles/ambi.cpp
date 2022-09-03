#include<iostream>
using namespace std;
int main()
{

    int a, b,c;
    h:
    cout<<" \n What do you want to do  \n 1. Area of Square   \n 2. Area of Circle  \n 3.Perimeter of regular figure ";
    cin>>a;

    switch(a)
    {
        case 1 : cout<<"Enter side";
                  cin>>b;
                  cout<<"Area is "<<b*b;
        break;
        case 2 : cout<<"Radii of Circle ";
                  cin>>b;
                  cout<<"Area of Circle is "<<b*b*3.1415;
        break;
        case 3 : cout<<"How many sides your regular figure has ";
                  cin>>c;
                  cout<<"Enter side length of "<<c<<" sided figure";
                  cin>>b;
                  cout<<"Perimeter of figure is "<<c*b;
         break;
        case 4 : exit(0);

    default : cout<<"Do hell with your mind";
    }
    goto h;
}
