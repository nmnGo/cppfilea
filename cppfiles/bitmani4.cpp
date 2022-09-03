#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    long n;
    //convert all bits right to a position 0to 0 and rest same.
    //1010 1 01010
    //1010 1 0 0000

    //to get to ith bit we use 1<<i(+1) which gives us left  bit pos  to ith bit in system
    //  that no is done -1 so that all bits in left becomes 1
    //see last video in bit manipulation
    cin>>n;

     int i = 0,binaryNum[16];
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];

    int pos;
    cin>>pos;
    int k=~((1<<(pos+1))-1);



     int ans[16];
        while (k> 0) {

        // storing remainder in binary array
        ans[i] = k % 2;
        k= k/ 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << ans[j];

return 0;
}
