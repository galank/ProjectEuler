#include <memory>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

int pb11()
{
  const int N=20;
  int a[N][N]={{0},{0}};
  //read in the grid
  string name="pb11-grid.txt";
  ifstream file;
  file.open(name.c_str(),ifstream::in);
  int row=0, col=0;
  while( file.good() )
    {
      while( col<N )
        {
          file >> a[row][col];
          col++;
        }
      col=0;
      row++;
    }
  //search for largest product in the 4 possible directions the grid can be read (all others will yield identical results ie down <=> up)
  int maxProd=0;
  for( int i=0; i<N; i++ )
    {
      for( int j=0; j<N; j++ )
        {
	  //down
	  if( i<17 )
            {
              if( a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j] > maxProd ) maxProd = a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
            }

          //right
	  if( j<17 )
            {
              if( a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3] > maxProd ) maxProd = a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
            }

          //diag up
	  if( i>3 && j<17 )
            {
              if( a[i][j]*a[i-1][j+1]*a[i-2][j+2]*a[i-3][j+3] > maxProd ) maxProd = a[i][j]*a[i-1][j+1]*a[i-2][j+2]*a[i-3][j+3];
            }

          //diag down
	  if( i<17 && j<17 )
            {
              if( a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3] > maxProd ) maxProd =  a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
            }
        }
    }
  file.close();
  cout << "The maximum product is " << maxProd << endl;
  return maxProd;
}

int main()
{
  int sol=pb11();
  return 0;
}
