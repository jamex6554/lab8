#include <iostream>
#include <cstdlib>
#include <ctime>
#include "genMino.h"

using namespace std;

int main()
{
  try
  {
    Mino * mino_ptr;

    srandom(time(NULL));
    for(int i=0;i<50;++i)
    {
      mino_ptr = genMino();
    }
  }
  catch(bad_alloc & memoryAlloc)
  {
    cerr << "Exception happened: "<<
            memoryAlloc.what() << endl;
  }
  return 0;
}

