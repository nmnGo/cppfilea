#include<iostream>

using namespace std;

int main()
{
    int k=0;
    for(int i=1;i<5;i++)
    {
          for(int j=1;j<8;j++)
          {
              if(j<=i||j>=(8-i))
                cout<<"*";
              else
                cout<<" ";
          }
          cout<<endl;
    }

return 0;
}
