#include "sudoku.h"


int main() {
    int **puzzle;
    Square ***sudoku;
   puzzle = creatpuzzle();
   printfpuzzle(puzzle);
   setuppuzzle(puzzle);
return 0;
}
void printpuzzle(int **puzzle) {}
