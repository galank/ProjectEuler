#include <iostream>

using namespace std;

long long pb5()
{
  long long n=2520;
  bool found=false;
  while( !found ) {
    if( n%20==0 && n%19==0 && n%18==0 && n%17==0 && n%16==0 && n%15==0 && n%14==0 && n%13==0 && n%12==0 && n%11==0 )  {
      found=true;
      break;
    }
    n=n+1;
  }
  cout << "The smallest number divisible by all the numbers between 1 and 20 is " << n << endl;
  return n;
}

int main()
{
  long long sol=pb5();
  return 0;
}
