CC = gcc
IDIR = ./include/
SRCDIR = ./src/
CFLAGS = -lncurses -I$(IDIR)
SOURCES = $(wildcard $(SRCDIR)*.c)

all: sudoku run clean

sudoku:
	$(CC) $(SOURCES) $(CFLAGS) -o $@

run:
	./sudoku

clean:
	rm -f sudoku

