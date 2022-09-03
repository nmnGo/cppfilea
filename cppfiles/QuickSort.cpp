#include<iostream>

using namespace std;

int Partition(int s,int e)
{


}

void Sort(int arr[],int s,int e)
{
    if (e<=s)  //base case condition
        return;

     int pivot=Partition(s,e);

     Sort(arr,s,pivot-1);
     Sort(arr,pivot+1,e);




}

int main()
{
    int arr[32],b;
   cout<<"Enter number of elements in array "<<endl;
    cin>>b;
    cout<<"Enter array "<<endl;
    for(int i=1;i<=b;i++)
    cin>>arr[i];

    Sort(arr,1,b);

return 0;
}
