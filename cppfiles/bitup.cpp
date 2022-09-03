#include <iostream>
#include <cmath>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
{
long long int n,m,a,ans,A,z=1000000007,square;

cin>>n>>m;

a=pow(2,n)-1;
A=a%z;

ans=1;
square=A;
if(m==0)
    return 1;
while(m!=0)
{
    if(m%2)
        ans=ans*square;
    square=(square*square)%z;
    m=m/2;

    if(ans>z)
        ans=ans%z;
}

cout<<ans;

cout<<endl;
}

return 0;
}
