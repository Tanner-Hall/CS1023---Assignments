#include <stdio.h>

#define ROWS 12
#define COLS 12

// Function prototypes
int solveMaze(char maze[ROWS][COLS], int r, int c);
void printMaze(char maze[ROWS][COLS]);

int main() {
    char maze[ROWS][COLS] = {
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#'},
        {'.', '.', '#', '.', '#', '.', '#', '#', '#', '#', '.', '#'}, // Entry at row 2, col 0
        {'#', '#', '#', '.', '#', '.', '.', '.', '.', '#', '.', '#'},
        {'#', '.', '.', '.', '.', '#', '#', '#', '.', '#', '.', '.'}, // Exit at row 4, col 11
        {'#', '#', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
        {'#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
        {'#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
        {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#'},
        {'#', '#', '#', '#', '#', '#', '.', '#', '#', '#', '.', '#'},
        {'#', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
    };

    printf("INITIAL MAZE\n");
    printMaze(maze);
    printf("\nStarting maze traversal\n\n");

    int entryRow = 2;
    int entryCol = 0;

    if (solveMaze(maze, entryRow, entryCol)) {
        printf("SUCCESS: An exit was found!\n");
    } else {
        printf("FAILURE: No path to the exit exists.\n");
    }

    printf("\n FINAL MAZE PATH \n");
    printMaze(maze);
}