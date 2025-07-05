#ifndef SUDOKU_H
#define SUDOKU_H

#include <stdio.h>
#include <stdlib.h>

extern int SIZE_ROWS;
extern int SIZE_COLUMNS;

// Optional: struct Box if you're using it
typedef struct Box {
    struct Box* next;
    // Add any additional fields if needed
} Box;

// This replaces char Posssible = 0x1FF;
// Make it an int to avoid overflow
#define POSSSIBLE 0x1FF

// Square struct definition
typedef struct {
    int number;
    int row;
    int column;
    int code;
} Square;

// Function declarations
int **creatpuzzle();
void printpuzzle(int **puzzle);
void setuppuzzle(int **puzzle);

#endif
