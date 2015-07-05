#include <cstdlib>
#include "genMino.h"
#define NUM_MINO 5
#define MINO_S 0
#define MINO_I 1
#define MINO_L 2
#define MINO_O 3
#define MINO_T 4
Mino * genMino()
{
  int mino_type;
  Mino * ptr;

  mino_type = random() % NUM_MINO;

  switch(mino_type){
    case MINO_S:
      ptr = new MinoS[10000000];
      break;
    case MINO_I:
      ptr = new MinoI[10000000];
      break;
    case MINO_L:
      ptr = new MinoL[10000000];
      break;
    case MINO_O:
      ptr = new MinoO[10000000];
      break;
    case MINO_T:
      ptr = new MinoT[10000000];
      break;
  }
  return ptr;
}

