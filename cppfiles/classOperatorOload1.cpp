#include<iostream>

using namespace std ;


class fraction //reference classFraction.cpp
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
    cout<<num<<"/"<<deno<<endl;
    }
     fraction add(fraction f2)
     {
         int deno1=deno*f2.deno;
         int num1=num*f2.deno+deno*f2.num;
             fraction fnew(num1,deno1);
         return fnew;
     }

     ///OPERATOR + OVERLOOADED HERE F3=F1+F2 ??????????????????/////////////////////////////////////9uhvwvh98888888888888888888*********************8

     fraction operator+(fraction f2)
     {
         int deno1=deno*f2.deno;
         int num1=num*f2.deno+deno*f2.num;
             fraction fnew(num1,deno1);
         return fnew;

     }
       /////WHEN WE WILL WRITE F3=F1+F2 .. F1 WILL BE "THIS" AND F2 WILL BE THE ARGUMENT ///////////,,,,,,,,,,,,,,,,,,,.........................

     fraction operator-(fraction f2)  //  - operator is overloaded here
     {
         int deno1=deno*f2.deno;
         int num1=num*f2.deno-deno*f2.num;

          fraction fnew(num1,deno1);

          return fnew;
     }

     void multiply(fraction f2) //fraction operator* will overload *
     {
          deno=deno*f2.deno;
          num=num*f2.num;
     }

     bool operator==(fraction f2)
     {
         return(num==f2.num&&deno==f2.deno);
     }


     fraction& operator++(){   //preIncrement
     num=num+deno;
     return *this;            //only this will return address only
                            //while * this will return whole block contents
     }
                //in unary operators we must use fraction& i.e (classname&) in order to avoid creation of buffer copies which lead to confusion


    //POST ICREMENT OPERATOR OVERLOADING
    fraction operator++(int){//int specifies post incrementing nature of operator
    fraction fnew(num,deno);
    /////////becoz j=i++ denotes j=i and increment i;
    num=num+deno;
    return fnew;
    }
/////////////////////////////////////////////////////////////////////////////////////////

    fraction& operator+=(fraction f2){
         int deno=deno*f2.deno;
         int num=num*f2.deno+deno*f2.num;
         return *this;

    }

};

int main()
{
    fraction f1(10,2),f2(15,4);
    fraction f3=f1.add(f2);
    //f1.subtract(f2); will be written as
    fraction f4=f1-f2;
    f1.print();
    f2.print();
  /*  f3.print();
    f4.print();//use of - operator
    f3=f3+f2; //use of overloaded operator>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<25/2 (15+35)/4
    f3.print();
   if( f3==f4)
    cout<<"Equal";
   else
    cout<<"not equal";


   */
    ++f2;
   f2.print();
   ++(++f2);

   fraction f6=f1++;
   f6.print();  //==f1
   f1.print();   //==f1+1
//this ++(++) is possible only bcoz of & bcoz buffer work is avoided in this


   f2.print();
return 0;}
