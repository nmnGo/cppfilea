#include<iostream>
#include<math.h>

using namespace std;

int main()
{
  // to check if ith bit is 1(set) or 0(unset)
  //Q-Check if 2nd bit of 9 is set or not
  // to check if any bit is 0 or not we do is we and it with 2^index provided and check if ans is 0 or 1 . .if 0 then unset (that bit is 0) else set
  //why 2^index bit ? bcoz it will have 1 only at   index provided and all other bits ' and will obvio give 0
//                                                                                                                                                                                                         00001001
                                                                                                                                                                                                        // 00000100  (do and with 4 - 2^2)
                int a=9;
                int ind =2;
                int k=1<<ind;// it will generete power of 2
                int ans =9&k;
                //cout<<k;
                if(ans)
                    cout<<"Bit 2 of 9 is set ";
                else
                    cout<<"unset bit ";

                //iflip that bit .

                //now we will xor with that bit
                cout<<"flipping the unset bit:";
                cout<<(9^(1<<ind));
                /*
                1 0 0 1
                0 1 0 0
                1 1 0 1
                see only that bit is flipped
                */

return 0;
}
