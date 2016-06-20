# 定義済みマクロの再定義
CC = gcc
CFLAGS = -Wall -O2

EXE = test_math test_pager

# サフィックスルール適用対象の拡張子の定義
.SUFFIXES: .c .o

# サフィックスルール
.c.o:
	$(CC) $(CFLAGS) -c $<

# プライマリターゲット
exe: test_math.o test_pager.o
	$(CC) -o exe/test_math test_math.o
	$(CC) -o exe/test_pager test_pager.o

test_math.o: ../math.h

test_pager.o: ../pager.h

# ファイル削除用ターゲット
.PHONY: clean
clean:
	$(RM) ./exe/* *.o
