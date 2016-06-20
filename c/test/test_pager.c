#include <stdio.h>
#include <assert.h>
#include "../pager.h"

int main ( int argc, char *argv[] )
{
  pager p = {0};

  initPager(&p, 10, 5);
  assert(p.num == 10);
  assert(p.line == 5);

  return 0;
}
