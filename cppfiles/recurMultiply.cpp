#include<iostream>

using namespace std;

int multiply(int a,int b)
{    if(b==0||a==0)
        return 0;

    a+=multiply(a,b-1);
    return a;
}

int main()
{
    int a,b;
    cout<<"Enter the numbers u want to multiply     ";
    cin>>a>>b;
    cout<<multiply(a,b);

return 0;
}
