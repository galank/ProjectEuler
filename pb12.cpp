#include <memory>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

const int N2=20000;
int pb12(int ndiv)
{
  int triangles[N2]={};
  triangles[1]=1;
  int n=0;
  for( int i=2; i<N2; i++ )
    {
      triangles[i]=triangles[i-1]+i;
      //if( i<5984 ) continue; //the 5984th triangle number, 17907120, has 350 divisors 
      int ndivs=0;
      for( int j=1; j<int(0.5*triangles[i])+1; j++ )
        {
          if( (triangles[i]%j)==0 ) ndivs++;
        }
      ndivs += 1; //the number itself is a divisor 
      //cout << "Number of divisors of " << triangles[i] << " is " << ndivs << endl;
      if( ndivs>ndiv )
        {
          n=triangles[i];
          break;
        }
    }
  cout << "The first triangle number with more than " << ndiv << " divisors is " << n << endl;
  return n;
}

int main()
{
  int ndiv=500;
  int sol=pb12(ndiv);
  return 0;
}
