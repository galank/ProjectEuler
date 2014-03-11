#include <memory>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

int pb9()
{
  int a0=0, b0=0, c0=0;
  for( int a=1; a<997; a++ )
    {
      for( int b=a+1; b<998; b++ )
        {
          for( int c=b+1; c<999; c++ )
            {
              if( a*a + b*b != c*c ) continue;
              if( a + b + c == 1000)
                {
                  a0=a;
                  b0=b;
                  c0=c;
		  break; //we are told there is only one
                }
            }
        }
    }
  cout << a0 << " " << b0 << " " << c0 << endl;
  cout << a0*b0*c0 << endl;
  return a0*b0*c0;
}

int main()
{
  int sol=pb9();
  return 0;
}
