#include <memory>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

int main()
{
  //numbers 1-9 --> 36 letters
  //numbers 11-19 --> 70 letters
  //tens --> 46 letters
  //hundreds --> 99 letters
  //1000 --> 11 letters

  //each hundred appears 100 times in the sum --> 100*99
  //and appears 99 times per 100 except the first --> 9*99*3
  //each ten appears 10 times per 100 --> 10*10*46
  //each 11-19 appears once per 100 --> 10*70
  //each 1-9 appears 1+8=9 times per 100 --> 10*9*36

  int sol=100*99+9*99*3+10*10*46+10*70+10*9*36+11;
  cout << "There are " << sol << " letters" << endl;
  return 0;
}
