#include<iostream>

using namespace std;

int main()
{
    int a=8&2;
    int b=4&5;
    int c=100<<2;
    int cr=100>>3;//div by 2^no provided
    int d=4|5;
    int e=~4;
    int xorr=4^5; //if both bits dif then 1   1 0 0
                                                                            // 1 0 1s
                                                                        //     0 0 1

    cout<<c<<endl;//left shift multiplies int by 2^no provided ,2 here ans is 400
    cout<<cr<<endl;
    cout<<a<<endl ;//And operator ->and bw bits 1000 and 0010 is 0000
    cout<<b<<endl;
    cout<<d<<endl;//or of bits 0 or 1 is 1 ,onlu 0 or 0 is 0
    cout<<e<<endl;
    cout<<xorr;
return 0;
}
