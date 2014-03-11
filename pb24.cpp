#include <memory>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <map>
#include <cmath>

using namespace std;

int factorial(int n)
{
  if( n<0 ) return 0;
  else if( n==0 ) return 1;
  else return n*factorial(n-1);
}

double pb24(int p)
{
  int count=0;
  const int nd=10;
  vector<int> digits;
  int n[nd]={};
  for( int j=0; j<nd; j++ ) digits.push_back(j);
  int i=0;
  while( count<p )
    {
      int ndigi=digits.size();
      int d=-1, loc=-1;
      cout << "Finding the " << nd-i << "th digit" << endl;
      for( int j=0; j<ndigi; j++)
        {
          cout << "Testing " << digits.at(j) << endl;
          d=digits.at(j);
          count += factorial(ndigi-1);
          if( count > p )
            {
              //go back! too many permutations
              cout << "Oops -- I went over the allowed number of permutations" << endl;
              count -= factorial(ndigi-1);
              cout << "We are currently at " << count  << " permutations" << endl;
              loc=j;
              cout << "The " << nd-i << "th digit must be " << d << endl;
              break;
            }
          if( count==p )
            {
              cout << "Exactly the right number of permutations!" << endl;
              loc=j;
              cout << "The " << nd-i << "th digit must be " << d << endl;
              break;
            }
        }
      cout << "Setting the " << nd-i << "th digit to " << d << endl;
      n[i]=d;
      digits.erase(digits.begin()+loc);
      cout << "There are now " << digits.size() << " digits to pick from: ";
      for( unsigned int k=0; k<digits.size(); k++ ) cout << digits.at(k) << " ";
      cout << endl;
      i++;
    }
  //loop over the remaining elements
  for( unsigned int j=0; j<digits.size(); j++ )
    {
      n[nd-j-1]=digits.at(j); //only one element left
    }
  double sol=0;
  for( int j=0; j<nd; j++ )
    {
      //cout << "The " << nd-j << "th digit is " << n[j] << endl;
      sol += double(n[j])*pow(10,nd-j-1);
    }
  cout << setprecision(nd) << "The " << p << "th permutation is " << sol << endl;
  return sol;
}


int main()
{
  int p=1e6;
  double sol=pb24(p);
  return 0;
}
