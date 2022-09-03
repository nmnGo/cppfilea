#include<iostream>
using namespace std;

int sumul(int a,int b,int*c,int*d)
{

*c=a+b;
*d=a*b;

return 0;
}

int main()
{
int z,x,c,v;
cin>>z>>x;
int *a=sumul(z,x,&c,&v);
cout<<c<<endl<<v;
cout<<a;

}
