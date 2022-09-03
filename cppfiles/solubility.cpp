#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long int D,d,P,Q,ans=0,Z=0;
              cin>>D>>d>>P>>Q;

for(int i=1; i*d<=D;i++)
{
    Z+= (D-i*d)*Q ;
}
ans=D*(P+Z);
        cout<<ans;              // a=1+id

       cout<<endl;
    }

    return 0;
}
