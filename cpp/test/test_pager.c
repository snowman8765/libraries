#include <stdio.h>
#include <assert.h>
#include "../pager.h"

int main ( int argc, char *argv[] )
{
  pager p = pager(10, 7);

  assert(p.line == 7);
  assert(p.num == 10);
  assert(p.currentPage == 1);
  assert(p.lastPage == 2);
  assert(p.startIndex == 0);
  assert(p.endIndex == 6);
  assert(p.lastIndex == 6);

  p.prev();
  assert(p.line == 7);
  assert(p.num == 10);
  assert(p.currentPage == 1);
  assert(p.lastPage == 2);
  assert(p.startIndex == 0);
  assert(p.endIndex == 6);
  assert(p.lastIndex == 6);

  p.next();
  assert(p.line == 7);
  assert(p.num == 10);
  assert(p.currentPage == 2);
  assert(p.lastPage == 2);
  assert(p.startIndex == 7);
  assert(p.endIndex == 13);
  assert(p.lastIndex == 9);

  p.next();
  assert(p.line == 7);
  assert(p.num == 10);
  assert(p.currentPage == 2);
  assert(p.lastPage == 2);
  assert(p.startIndex == 7);
  assert(p.endIndex == 13);
  assert(p.lastIndex == 9);

  return 0;
}
