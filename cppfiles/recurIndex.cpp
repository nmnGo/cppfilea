#include<iostream>

using namespace std;

int indexBta(int a[],int Size,int num)
{
    int ans=1;
    if (num==a[1]||Size==0)
            return 1;

    ans +=indexBta(a+1, Size-1,num);
    return ans;
}

int main()
{
    int arr[10],Size,num;
    for(int i=1;i<7;i++)
        cin>>arr[i];
    cout<<"Enter number you want index for ";
    cin>>num;

    cout<<indexBta(arr,6,num);

return 0;
}
