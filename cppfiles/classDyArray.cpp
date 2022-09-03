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
            int *newdata=new int[2*capacity];
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

    void print()
    {
        for(int i=0;i<next;i++)
            cout<<data[i]<<" ";
        cout<<endl<<next<<endl;
        cout<<capacity<<endl;
    }

    dArr(dArr const &d)                 //user defined copy constyructor  const is used to avoid changes in argument
                                        // & is used to pass address of object

    {
        //this->data=d.data; this is what default copy constructor does
        //we only change it to
        this-> data=new int[d.capacity];//here a new memory block is created which was not been done earlier so changes are not reflected in this
        for(int i=0;i<d.next;i++)
        {
            this->data[i]=d.data[i];
        }

        this->capacity=d.capacity;
        this->next=d.next;

    }

    ///OVERLOADING = OPERATOR FOR SAME JOB OF D2(D1) AS D2=D1;
   void operator=(dArr const &d)
    {
         this->data=new int[d.capacity]; //Exactly same as above
        for(int i=0;i<d.next;i++)
        {
            this->data[i]=d.data[i];
        }

        this->capacity=d.capacity;
        this->next=d.next;
    }




};


int main()
{
    dArr D1;
    D1.add(10);D1.add(2);
    D1.add(20);D1.add(60);D1.add(80);D1.add(910);D1.add(120);D1.add(101);
    D1.print();

    //dArr d2(D1);     d2.print();
///the above code does shallow copying (without function in line 50 ), it gives address of D1 to d2 so changes done in d1 are also reflected in d2 because of
// default COPY CONSTRUCTOR works that way  but for us this is quite unwanted since that ruins the whole purpose of copying ----( meme--khaby enters)
      ///so what we do is make to make our own user defined copy constructor to DEEP COPY things (we take job in our own creative -meticulous hands)

    //this will change index 4 only in D1 not in any other object taking values from D1 bcz now we done deep copy
      dArr d3(D1); //now with copy constructor at 50 line we can do this without shallow copying ie d3 is a completely independent object

     dArr d4=D1;  //= did shallow copying earlier but now with function on line 68 it does deep copy
     D1.print();
      D1.add(4,1201);
      D1.print();
     d3.print();
     d4.print();
     d4.print();

return 0;
}
