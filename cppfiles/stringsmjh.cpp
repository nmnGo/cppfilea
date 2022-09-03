#include <iostream>
using namespace std;

int main()
{
 int t,k,flag=0,o=0;
 long n=0;
 string s;
 cin>>t ;

for(int j=0;j<t;j++)
    {
    cin>>n>>k;

     cin>>s;

           for(int i=0;i<n;i++)                     //traversal
            {
                   if(s[i]=='*')
                        {
                            ++flag;
                            if(flag>=k)
                            {
                             o=1;

                            }
                        }
                    else
                     flag=0;
             }

     if (o==1)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;

   }

return 0;
}


