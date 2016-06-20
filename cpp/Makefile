# 定義済みマクロの再定義
CC = g++
CFLAGS = -Wall -O2

EXE = test_pager

# サフィックスルール適用対象の拡張子の定義
.SUFFIXES: .c .o

# サフィックスルール
.c.o:
	$(CC) $(CFLAGS) -c $<

# プライマリターゲット
exe: test_pager.o
	$(CC) -o test_pager test_pager.o

test_pager.o: pager.h

# ファイル削除用ターゲット
.PHONY: clean
clean:
	$(RM) $(EXE) *.o
