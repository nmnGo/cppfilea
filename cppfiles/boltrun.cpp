#include <iostream>
using namespace std;

int main() {
	int T;
	float a,b,c,v;
	cin>>T;

	for(int i=0;i<T;i++)
	{
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>v;
	if((a*b*c*v)>10.4384)
	cout<<"YES";
	else
	cout<<"NO";
	}
	return 0;
}

