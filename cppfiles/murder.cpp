#include<iostream>

using namespace std;

int main(){
int t;
cin>>t;
int arr[t];
for(int i=0;i<t;i++)
cin>>arr[i];
int ans=0;
for(int i=0;i<=t;i++)
{
    for(int j=0;j<i;j++)
    {
        if(arr[j]<arr[i])
            ans+=arr[j];
    }

}
cout<<ans;
return 0;
}
