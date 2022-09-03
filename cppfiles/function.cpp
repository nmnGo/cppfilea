#include<iostream>
using namespace std;

int sum(int *a,int s)
{

    int t=0;
    for(int i=0;i<s;i++)
        t+=a[i];

  return t;
}
 int main()
 {

     cout<<"kitni ki khaaj hai";
     int Size,i;
     cin>>Size;
     int k[Size];
     for(i=0;i<Size;i++)
     {
         cin>>k[i];

     }
     cout<<sum(k,Size);
 }

