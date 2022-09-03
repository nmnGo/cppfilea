#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int a;
cout<<"Enter the num ";
cin>>a;
//check if odd or even
if(a&1)
    cout<<"odd";
else
    cout<<"even";
/*check if number is pow 2

''''''''''''important -- Pow will have only one 1 in its bits

we and the num with n-1
8   1 0 0 0              16     1 0 0 0 0       24                1  1  0 0 0
7    0 1 1  1             15    0 1 1 1 1       23                 1 1  0 0 1
*/
cout<<endl;

if(a&(a-1))
{
    cout<<"it is not power of two";

}
else
    cout<<" hai ye  power of 2";
return 0;
}
