#include<iostream>
////////////////FIBBONACI SERIES ////////////////////////////

using namespace std;

int fibbonaci(int n)
{
    if(n==1)
        return 1;
     if (n==2)
        return 1;

    return (fibbonaci(n-1)+fibbonaci(n-2));

}

int main()
{
    int a;
    cin>>a;
    cout<< fibbonaci(a);
    return 0;
}
