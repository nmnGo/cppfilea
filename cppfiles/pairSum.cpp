
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int arr[10],i,n;
cout<<"Enter the array of integers "<<endl;
for( i=0;i<4;i++)
cin>>arr[i];

sort(arr,arr+i);
cout<<"Enter the sum you want to search pairs for "<<endl;
cin>>n;

int len=i,cnt =0,j=0;
while(j<=len){
    if(arr[j]+arr[len] <n)
    {
        j++;
    }else if(arr[j]+arr[len] ==n){
    cnt ++;
    j++;
    }else{
    len--;
    }
   // cout<<len<<" " <<j<<" "<<arr[len]<<endl;
}
cout<<cnt;
return 0;


}
