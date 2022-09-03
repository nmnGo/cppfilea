#include<iostream>

using namespace std;

//a king is killing monster from last.when ith monstrer is attacked i+1 th monster goes to first
//1234->312[4 is killed ]->13[2 is killed]->1 is last monster to be killed

monster(int arr[10])
{
    int k=sizeof(arr)/4;
    if(k==1)
    {
        cout<<arr;
        return;
    }
    else if(k%2==0)
     {
         for(int i=1;i<=k;i++)
         {

         }
     }
     else
     {

     }
}




}
int main()
{
    cout<<"The array is  ";
    int i,arr[10];

    for(i=1;i<11;i++)
    {
        arr[i]=i;
    }
    monster(arr);
return 0;
}
