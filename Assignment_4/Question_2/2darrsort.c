#include <stdio.h>
#define ROWS 3
#define COLS 4

void displayArray(int arr[ROWS][COLS]);
void sort2DArray(int arr[ROWS][COLS]);
void runTest(int arr[ROWS][COLS], const char* testName);

int main() {
    int array1[ROWS][COLS] = {
        {7,  3,  9,  1},
        {8,  2,  5,  4},
        {12, 6, 11, 10}
    };
    runTest(array1, "Test 1: Standard Mixed Values");
    int array2[ROWS][COLS] = {
        {-5,  10, -5,  3},
        { 0,   3,  2, -1},
        {10,  -1,  0,  2}
    };
    runTest(array2, "Test 2: Negative Numbers and Duplicates");
    int array3[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    runTest(array3, "Test 3: Already Sorted Array");
}
