 #include<iostream>
 #include<vector>
 using namespace std;

 int minRow(int N, int M, vector<vector<int>> A) {
        // code here
        int c[N];
        for(int i=1;i<=N;i++)
        {
            int a=0;
            for(int j=1;j<=M;j++)
            {
                if(A[i][j]==1)
                a++;
            }
            c[i]=a;
        }
        int a=10000;
        for(int i=1;i<=N;i++)
        {
            a=min(a,c[i]);
        }

        for(int i=1;i<=N;i++)
        {
            if(c[i]==a)
            {
                a=i;
                break;
            }
        }
        return a;
    }

    int main_()
    {
       int N=4,M=4;
    vector<vector<int>> A=[1,1,1,1],[1,1,0,0],[0,0,1,1],[1,1,1,1];
        int minRow( N,  M,  A);
return 0;
    }
