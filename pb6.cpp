#include <iostream>

using namespace std;

int pb6(int n)
{
  int sumSquares=0, sumSquared=0;
  for( int i=1; i<=n; i++ ) 
    {
      sumSquares += i*i;
      sumSquared += i;
    }
  sumSquared *= sumSquared;
  int sol=sumSquared-sumSquares;
  cout << "The sum of natural numbers between 1 and " << n << " is " << sol << endl;
  return sol;
}

int main()
{
  int n=100;
  int sol=pb6(n);
  return 0;
}
