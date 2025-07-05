#include "../include/sudoku.h"

int SIZE_ROWS = 9;
int SIZE_COLUMNS = 9

int main() {
    int **puzzle;
    puzzle = creatpuzzle();
    printpuzzle(puzzle);
    setuppuzzle(puzzle);
    return 0;
}
