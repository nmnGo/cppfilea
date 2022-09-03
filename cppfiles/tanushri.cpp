//////////////////////////////////// Tanushri . CPP
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
int i,j;
    for( i =0;i<3;i++)
    {
       for(j=3;j>=0;j--)
        {
        if(i<j)
            {
            cout<<j-i<<" ";
            }
        }
        cout<<endl;
    }

return 0;
}
