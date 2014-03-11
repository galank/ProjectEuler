#include <memory>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

int pb1(int max)
{
  int sum=0;
  for(int i=0; i<max; i++)
    {
      if( (i%3)==0 || (i%5)==0 ) sum += i;
    }
  cout << "The sum is " << sum << endl;
  return sum;
}

int main()
{
  int max=1000;
  return pb1(max);
}
