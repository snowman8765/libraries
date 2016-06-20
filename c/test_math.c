#include <stdio.h>
#include <assert.h>
#include "math.h"

int main ( int argc, char *argv[] )
{
  assert(max(1,2) == 2);
  assert(max(2,1) == 2);
  assert(max(0,2) == 2);
  assert(max(2,0) == 2);
  assert(max(-20,0) == 0);
  assert(max(0,-20) == 0);

  assert(min(1,2) == 1);
  assert(min(2,1) == 1);
  assert(min(0,2) == 0);
  assert(min(2,0) == 0);
  assert(min(-20,0) == -20);
  assert(min(0,-20) == -20);

  return 0;
}
