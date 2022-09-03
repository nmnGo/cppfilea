#include<iostream>

using namespace std;

class fraction
{
    int num,deno;
    void reduce(int *a,int*b)
    {
        int gcd=1,A=*a,B=*b;
        for(int i=1;i<=min(A,B);i++)
        {
            if(A%i==0&&B%i==0)
                gcd=i;
        }
        *a=A/gcd;
        *b=B/gcd;
    }

public:
    fraction(int num,int deno)
    {
        reduce(&num,&deno);
        this->deno=deno;
        this->num=num;
    }

    void print()
    {
    cout<<num<<"/"<<deno;
    }
     void add(fraction f2)
     {
         int deno1=deno*f2.deno;
         int num1=num*f2.deno+deno*f2.num;
          reduce(&num1,&deno1);

         num=num1;
         deno=deno1;
     }

     void subtract(fraction f2)
     {
         int deno1=deno*f2.deno;
         int num1=num*f2.deno-deno*f2.num;

         reduce(&num1,&deno1);
          num=num1;
         deno=deno1;
     }


};

int main()
{
    fraction f1(10,2),f2(15,4);

    f1.add(f2);
    f1.print();

   // f1.subtract(f2); subtraction will be from added f1 (35/4)  not  10/2
       //f1.print();
//similarly multiply and divide func can be made

return 0;
}
