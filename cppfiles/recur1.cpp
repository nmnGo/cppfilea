#include<iostream>

using namespace std;
    //when a function calls itself is recursion
    //it is used when a problem can be divided into same subproblems
    int factorial(int a)
    {
        int ans;
        if(a==1)           //this is the condition to stop the recursion which otherwise would have gone on
            return 1;
        else
        {
            ans=factorial(a-1);
            return a*ans;
        }

    }


int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
}
