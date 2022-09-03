#include<bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int j=1;j<t+1;j++)
	{
	    int n,k;
	    cin>>n>>k;
	    char arr[n][k];
	    bool flag=true;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<k;j++)
	        cin>>arr[i][j];
	    }
	    if(n==1)
	    {
	        for(int i=0;i<k;i++)
	        if(arr[0][i]=='^')
	        flag=false;

	    }else if(k==1){
	        for(int i=0;i<k;i++)
	        if(arr[i][0]=='^')
	        flag=false;
	    }

	    cout<<"Case #"<<j<<": ";
	    if(flag){
	    cout<<"Possible"<<endl;
	    if(k==1)
	    {
	        for(int i=0;i<n;i++)
	        cout<<"."<<endl;
	    }else if(n==1){
	        for(int i=0;i<k;i++)
	        cout<<".";
	    }else{
	        for(int i=0;i<n;i++)
	        {
	            for(int j=0;j<k;j++)
	            cout<<'^';

	            cout<<endl;
	        }
	        }
	    }
	    else
	    cout<<"Impossible";

	    cout<<endl;
	}
	return 0;
}
