#include <stdio.h>
#include "../c/math.h"

class pager {
  public:
    int line; // 1ページの行数
    int num; // 全データ数
    int currentPage; // 現在のページ番号
    int lastPage; // 最後のページ番号
    int startIndex; // 現在のページの開始インデックス
    int endIndex; // 現在のページの終了インデックス(最後のページの時、[lastPage * line]となる。)
    int lastIndex; // 現在のページの有効な終了インデックス(最後のページの時、[num - 1]となる。)

    pager(int num, int line) {
      this->num = max(num, 0);
      this->line = line > 0 ? line : 5;
      this->calc(1);
    }

    void calc(int currentPage) {
      if (this->num <= 0) {
      this->num = 0;
        this->currentPage = 1;
        this->lastPage = 1;
        this->startIndex = 0;
        this->endIndex = -1;
        this->lastIndex = -1;
        return;
      }
      this->currentPage = max(currentPage, 1);
      this->lastPage = (this->num - 1) / this->line + 1;
      this->currentPage = min(this->currentPage, this->lastPage);
      this->startIndex = this->line * (this->currentPage - 1);
      this->endIndex = (this->line * this->currentPage) - 1;
      this->lastIndex = min(this->endIndex, (this->num - 1));
    }

    void next() {
      this->calc(this->currentPage + 1);
    }

    void prev() {
      this->calc(this->currentPage - 1);
    }
};
