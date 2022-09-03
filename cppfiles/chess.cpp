#include<iostream>

using namespace std;

int main(){
int t;
cin>>t;
while(t--)
{
    int a,s,d,f,g,h,ans=0;
    cin>>a>>s>>d>>f>>g>>h;
int n=s-1,m=s+1,o=a-1,p=a+1;
    if(a==1)
    {
        if(d==2||g==2)
        {
            if(f!=h&&f!=n&&f!=m&&h!=n&&h!=m)
                ans=1;
        }
    }
    if(s==1)
    {
         if(h==2||f==2)
        {
            if(d!=g&&d!=o&&d!=p&&g!=o&&g!=p)
                ans=1;

        }

    }
    if(s==8)
    {
         if(f==7||h==7)
        {
            if(d!=g&&d!=o&&d!=p&&g!=o&&g!=p)
                ans=1;

        }

    }
    if(a==8)
    {
         if(d==7||g==7)
        {
            if(f!=h&&f!=n&&f!=m&&h!=n&&h!=m)
                ans=1;

        }

    }
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////

     if(ans)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;
}

return 0;}

