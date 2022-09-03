//////////////////////// CHECKING IF ARRAY IS SORTED    9999999999999999999999999999999999999999999999999999999999
#include<iostream>

using namespace std;

bool isSorted(int a[],int Size)
{
    if(Size==0 || Size==1)
    {return true;}

    if(a[1]>a[2])
        {
            return false;
        }


 return isSorted(a+1,Size-1)  ;

}

int main()
{
    int a[10];
    cout<<"Enter array  ";
    for(int i=1;i<=6;i++)
        cin>>a[i];

    cout<<isSorted(a,6);

return 0;
}
