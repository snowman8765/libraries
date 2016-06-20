# 定義済みマクロの再定義
CC = g++
CFLAGS = -Wall -O2

EXE = test_pager test_array

# サフィックスルール適用対象の拡張子の定義
.SUFFIXES: .c .o

# サフィックスルール
.c.o:
	$(CC) $(CFLAGS) -c $<

# プライマリターゲット
exe: test_pager.o test_array.o
	$(CC) -o exe/test_pager test_pager.o
	$(CC) -o exe/test_array test_array.o

test_pager.o: ../pager.h

test_array.o: ../array.h ../mem.h

# ファイル削除用ターゲット
.PHONY: clean
clean:
	$(RM) ./exe/* *.o
