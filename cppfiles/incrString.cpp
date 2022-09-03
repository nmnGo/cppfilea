#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int arr[26];
    for(int i=97;i<123;i++)
        arr[i]=0;

    string ar;
    cin>>ar;

    for(int i=0;ar[i]!=NULL;i++)
    {
     arr[int(ar[i])]++;
    }

    int ans[26];

      for(int i=97;i<123;i++)
      {
          if(arr[i]==8)
          {
              ans[a]
          }
            cout<<char(ans[i]);
      }


    }
return 0;}
