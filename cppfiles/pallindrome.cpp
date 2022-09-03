#include<iostream>
using namespace std;

 int main()
 {
     char str[50];
     int n;
     bool flag=false;
     cout<<"Enter the no of letters in word  \n";
     cin>>n;
     for(int i=0;i<n;i++)
        cin>>str[i];
                 for(int i=0;i<n/2;i++)
                 {
                     if(str[i]==str[n-i-1])
                        flag=true;
                     else
                        flag=false;
                 }

        if (flag)
        cout<<"It is a pallindrome ";

      else
        cout<<"It is not a pallindrome ";
 return 0;
 }
