#include<iostream>

using namespace std;
///we want to have an array class where we dont have to tell its size and user have access to add any number of elements

class dArr
{
    int *data;
    int next;
    int capacity;

public:
    dArr()
    {
        capacity=4;
        data=new int[capacity];
        next=0;
    }
    void add(int a)
    {
        if(next==capacity)
        {
            int *newdata=new int[2*capacity]
            for(int i=0;i<capacity;i++)
            {
                newdata[i]=data[i];
            }
            capacity+=capacity;
            delete [] data;
            data=newdata;
        }
        data[next]=a;
        next++;
    }
    void add(int i,int a)
    {
        if(i>next)
            return;
        else
            data[i]=a;
    }
};


int main()
{

return 0;
}
