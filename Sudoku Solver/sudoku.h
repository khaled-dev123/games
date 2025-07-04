#include<stdio.h>
#include<stdlib.h>
#include "sudoku.h"

char Posssible = 0x1FF;


typedef struct Box {
 
struct Box* next;
{
    /* data */
};

} Box;
typedef struct Square {
    int number
    char code;
    Box* box;
    int row;
    int column;
} Square;

int ** creatpuzzle();
void printpuzzle(int **puzzle);
    