#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        long n,k,count=0;
        bool flag=false;
        cin>>n>>k>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*')
            {
                count++;
                if(count==k)
                {
                    flag=true;
                }
            }
            else if(s[i]!='*')
                {
                    count=0;
                }
        }
        if(flag)
            cout<<"yes"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;

}
