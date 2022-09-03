#include <iostream>
#include <cmath>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
{
long long int n,m,a,ans,b,A;

cin>>n>>m;

a=pow(2,n)-1;
A=a%1000000007;
b=pow(a,m);


ans=(b%(1000000007));

cout<<ans;

cout<<endl;
}

return 0;
}
int NoPowMod( int A, int m, int z )
{
	int a = x % z;
	int t = 1;
	while( y > 0 )
	{
		// Y is odd
		if( y & 1 )
		{
			t = (t * a) % z;
		}
		y >>= 1;
		a = (a * a) % z;
	}
	return(t);
}
