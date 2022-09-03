#include<iostream>
#include<string>
using namespace std;

void mergeSort(int arr[],int len)
{
for(int i=0;i<9;i++)
    cout<<arr[i]<<"  ";
}




int main()
{
    int arr[20]={2,36,34,23,156,789,1234,9,987};
    mergeSort(arr,9);
    for(int i=0;i<10;i++)
    cout<<arr[i]<<"  ";
 return 0;
}
