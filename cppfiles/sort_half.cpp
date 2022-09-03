#include<iostream>
using namespace std;


int main()
{
int a[100],z,f=0,l=100,h,k=1; //k gives no of iterations  f is first index and l is last  z is no to be compared
for(int i=0;i<100;i++)
    a[i]= i + 70;

cout<<"Enter the number \n";
cin>>z;
p:
    h=(f+l)/2;

    if(z==a[h])
    cout<<endl<<h<<endl;

    else if (z<a[h])
    {
        l=h;
        k++;
        goto p ;

    }
     else
    {
            f=h;
            k++;
            goto p;
    }


return k;
}
