#include<iostream>

using namespace std;

/*Chef has N 6-sided standard dice. Each die has dimensions 1×1×1

. Since Chef is bored during the quarantine, he decides to stack dice for fun.

First, Chef forms four vertical stacks of dice (not necessarily with the same height;
empty stacks are allowed) on his table, which together make up a pile of dice with base area up to 2×2

. Among all such structures, the total visible surface area of Chef's structure must be the smallest possible.

Then, Chef calculates the number of pips on the visible faces of all dice in the structure.
 A face of a die is visible if it does not touch the table or another die.

Now, he is wondering: among all possible arrangements of dice,
 what is the maximum possible total number of visible pips?
 Since he is busy cooking, he is asking you to solve this.

0utput

For each test case, print a single line containing one integer ― the maximum possible number of visible pips.
*/

int main()
{
    long long int  t,n;

    cin>>t;
    while(t--)
    {
        cin>>n;
        int a = n/4, b=n%4;

        switch(n)
        {
            case 0: cout<<0;
            break;
            case 1:cout<<20;
            break;
            case 2:cout<<36;
            break;
            case 3:cout<<51;
            break;

            default : long int ans =36*(a-1)+60;

                switch(b)
                    {
                    case 1:cout<<ans + 14;
                    break;
                    case 2:cout<<ans+24;
                    break;
                    case 3:cout<<ans+35;
                    break;
                    case 0: cout<<ans;
                    break;

                    }
            }

    }

    return 0;
}
