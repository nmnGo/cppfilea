#include<iostream>
using namespace std;

 int main()
 {
     int* p=new int[50];
     int max=0,a=0;
     cout<<"Enter the integers  (to exit press -1)"<<endl;
     while(p[a-1] != -1)
     {
     cin>>p[a];
     a++;
     }
     a=0;
    while(p[a]!= -1)
     {
        if(max<p[a])
            max=p[a];
        a++;
     }
     cout<<"product of process is " <<max;
     delete []p;
     return 0;
 }
