#include <iostream>
using namespace std;

int main()
{
    int t,i;
long x,n,temp,Count;
long long int a[n];

    cin>>n>>x;
    temp=n;

    while(temp--)
    cin>>a[temp];

    for(int i=0;i<n;i++)
    {
        for(int j=0;i+j<n;j++)
        {
            if(a[i]!=a[i+j])
                Count++;
        }
     }
     cout<<Count;


	// your code goes here
	return 0;
}
