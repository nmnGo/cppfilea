#include<iostream>

using namespace std;

void mergeSort(int arr[],int a,int b)
{
    if (b<=a)  //base case condition
        return;

    int mid=(a+b)/2; // a is start index   b is last index (of array obvio )

    mergeSort(arr,a,mid);
    mergeSort(arr,mid+1,b);

}

int main()
{
    int arr[32],b;
   cout<<"Enter number of elements in array "<<endl;
    cin>>b;
    cout<<"Enter array "<<endl;
    for(int i=1;i<=b;i++)
    cin>>arr[i];

    mergeSort(arr,1,b);

return 0;
}
