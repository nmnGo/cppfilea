#include<iostream>

using namespace std;
int main()
{
    int a[10];
    a[0]=1;
    char ch = 'a';
 char* ptr = &ch;
 ch++;
 cout << *ptr << endl;
char b[] = "xyz";
char *c = &b[0];
cout << c << endl;

    cout<<sizeof(a);
    cout<<endl<<a;
}
