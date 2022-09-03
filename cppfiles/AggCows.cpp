#include<bits/stdc++.h>
using namespace std;

bool check(int cows,int pos[],int n,int dist)
{
    int cnt=1;
    int last_put=pos[0];
    for(int i=1;i<n;i++)
    {
        if(pos[i]-last_put>=dist){
         last_put=pos[i];
       cnt++;
       }

        if(cnt==cows){
            return true;
        }
    }
    return false;
}

int main()
{
int n;
int len;
    cout<<"Enter Number of  Cows and then positions ";
    cin>>n>>len;
  int arr[len];
    for(int i=0;i<len;i++)
    {
cin>>arr[i];
    }
    sort(arr,arr+len);

    int s=0;
    int e=arr[len-1]-arr[0];

    int ans=0;

    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(check(n,arr,len,mid))
        {
                ans=mid;
                s=mid+1;
        }else {
        e=mid-1;
        }
      }
    cout<<ans<<endl;
}
