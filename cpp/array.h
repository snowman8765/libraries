#include "mem.h"

#define ARRAY_LENGTH(a)    (sizeof(a) / sizeof((a)[0]))


/**
 * 配列の指定したインデックスを取り除き、ひとつ前にずらす。
 * 一番最後にはゼロで埋めた内容を入れる。
 *
 * @param array 配列
 * @param removeIndex 取り除く位置
 **/
template< class T > inline void shiftArray(T& array, int removeIndex) {
  int endIndex = ARRAY_LENGTH(array) - 1;
  for (int i = removeIndex; i < endIndex; i++) {
    array[i] = array[i + 1];
  }
  FILL_ZERO(array[endIndex]);
}

