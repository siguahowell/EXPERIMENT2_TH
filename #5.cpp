#include <iostream>
#include <conio.h>
 
using namespace std;
 
main()
{
   int c, first = 0, second = 1, next;
   const int n=22;
 
   cout << n << " terms of Fibonacci series are :"<<endl;
 
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      cout << next << ",";
   }
    getch();
   return 0;
}

