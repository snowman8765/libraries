#include <stdio.h>
#include <assert.h>
#include "../array.h"

int main ( int argc, char *argv[] )
{
  int a[] = {0,1,2,3,4};
  shiftArray(a, 2);

  int size = ARRAY_LENGTH(a);
  assert(size == 5);

  assert(a[0] == 0);
  assert(a[1] == 1);
  assert(a[2] == 3);
  assert(a[3] == 4);
  assert(a[4] == 0);

  return 0;
}
