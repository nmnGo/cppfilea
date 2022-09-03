#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iostream>
   using namespace std;
   int main ()
{
   int a,b,c,D;
   float root1,root2;

  printf("Enter value of a,b,c");
 scanf("%d%d%d",&a,&b,&c);
 D=b*b-4*a*c;

  if(D>=0)
   {
    if(D>0)
    {
    root1=(-b+sqrt(D))/2*a;root2=(-b-sqrt(D))/2*a;
    printf("root1=%f,root2=%f",root1,root2);
    }

      else
    {
      root1=root2=-b/2*a;
      printf("root1=root2=%f",root1,root2);
    }
   }
    else
    {
      printf("roots are imaginary");
    }
      getch();
    }
