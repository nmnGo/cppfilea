#include<iostream>

using namespace std;

int length(char ar[])
{
    if(ar[0]=='\0')
        return 0;

    int smallLength=length(ar+1);             //qwerty ==> werty ==> erty==>rty===>ty==>y==>/0
    return 1+smallLength;                     //    6<==   5 <==  4 <== 3 <== 2 <== 1  <== 0
}

int pallindrome(char arr[],int a,int b=0)
{
    int val=0;
     a--;
    if(b>=a)
        return 0;

    if(arr[b]!=arr[a])
         val=1;

   b++;
   val=val+ pallindrome(arr,a,b);
         return val;
}

int main()
{
    char str[20];
    int l=0;
    cout<<"Enter the word to check if its pallindrome ";
    cin>>str;

    l=length(str);
    //cout<<l;

    if(pallindrome(str,l))
        cout<<"Not a pallindrome";
    else
        cout<<"Pallindrome";

return 0;
}
