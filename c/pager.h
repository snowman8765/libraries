#include "math.h"

typedef struct {
  int line; // 1ページの行数
  int num; // 全データ数
  int currentPage; // 現在のページ番号
  int lastPage; // 最後のページ番号
  int startIndex; // 現在のページの開始インデックス
  int endIndex; // 現在のページの終了インデックス(最後のページの時、[lastPage * line]となる。)
  int lastIndex; // 現在のページの有効な終了インデックス(最後のページの時、[num - 1]となる。)
} pager;

void initPager(pager* p, int num, int line);
void calc(pager* p, int currentPage);
void next(pager* p);
void prev(pager* p);

void initPager(pager* p, int num, int line) {
  p->num = max(num, 0);
  p->line = line > 0 ? line : 5;
  calc(p, 1);
}

void calc(pager* p, int currentPage) {
  if (p->num <= 0) {
    p->num = 0;
    p->currentPage = 1;
    p->lastPage = 1;
    p->startIndex = 0;
    p->endIndex = -1;
    p->lastIndex = -1;
    return;
  }
  p->currentPage = max(currentPage, 1);
  p->lastPage = (p->num - 1) / p->line + 1;
  p->currentPage = min(p->currentPage, p->lastPage);
  p->startIndex = p->line * (p->currentPage - 1);
  p->endIndex = (p->line * p->currentPage) - 1;
  p->lastIndex = min(p->endIndex, (p->num - 1));
}

void next(pager* p) {
  calc(p, p->currentPage + 1);
}

void prev(pager* p) {
  calc(p, p->currentPage - 1);
}
