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
int solveMaze(char maze[ROWS][COLS], int r, int c) {
    if (r < 0 || r >= ROWS || c < 0 || c >= COLS) {
        return 0;
    }
    if (maze[r][c] != '.') {
        return 0;
    }

    maze[r][c] = 'x';
    printf("Moving to [%d, %d]:\n", r, c);
    printMaze(maze);
    printf("\n");
    if (c == COLS - 1) {
        return 1; 
    }
    if (solveMaze(maze, r, c + 1)) return 1;
    if (solveMaze(maze, r + 1, c)) return 1;
    if (solveMaze(maze, r, c - 1)) return 1;
    if (solveMaze(maze, r - 1, c)) return 1;
    maze[r][c] = ' '; 
    printf("Dead end hit at [%d, %d]! Backtracking...\n", r, c);
    printMaze(maze);
    printf("\n");
    
    return 0;
}
