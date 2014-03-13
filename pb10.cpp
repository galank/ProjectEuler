#include <iostream>
#include <math.h>

using namespace std;

long long pb10(long long n)
{
  long long i=3, sum=2;
  while( i<=n )
    {
      //cout << "Testing " << i << endl;
      bool isPrime=true;
      for( long long j=2; j<=int(sqrt(double(i))); j++ ) 
	{
	  if( i%j == 0 ) 
	    {
	      isPrime=false;
	      break;
	    }
	}
      if( isPrime ) 
	{
	  //cout << "Adding " << i << " to the sum" << endl;
	  sum += i;
	}
      i=i+1;
    }
  cout << "The sum is " << sum << endl;
  return sum;
}

int main()
{
  long long sol=pb10(2e6);
  return 0;
}
