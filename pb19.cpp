#include <memory>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

int pb19()
{
  int d=1, m=0, y=1, count=0;
  for( int i=0; y<101 ; i++, d++ )
    {

      //cout << "Day number " << i << " Year / month / day is " << y << " / " << m+1 << " / " << d << endl;

      if( d==1 && i%7==5 ) {
        //cout << "Found a Sunday the 1st: Month is " << m+1 << " and year is " << y << endl;
	count++;
      }

      if( d<28 ) continue;

      if( d==28 )
        {
          if( m%12==1 && (y%4!=0 || (y%100==0 && y%400!=0) ) )
            {
              d=0;
              m=m+1;
            }
        }

      if( d==29 )
	{
	  if( m%12==1 && (y%4==0 || y%400==0) )
            {
	      d=0;
	      m=m+1;
            }
        }

      if( d==30 && (m%12==3 || m%12==5 || m%12==8 || m%12==10) )
        {
          d=0;
          m=m+1;
        }

      if( d==31 && (m%12==0 || m%12==2 || m%12==4 || m%12==6 || m%12==7 || m%12==9) )
        {
          d=0;
          m=m+1;
        }

      if( d==31 && m%12==11 )
        {
          d=0;
          m=0;
          y=y+1;
        }

      //if( d>31 || m>12 ) cout << "I lost track of time" << endl;
    }

  cout << "Number of Sundays falling on the 1st between 01 Jan 1901 and 31 Dec 2000 is " << count  << endl;
  return count;
}

int main()
{
  int sol=pb19();
  return 0;
}
