#include <stdio.h>

int furthestDistanceFromOrigin(const char moves[]);

int main() {
    char userInput[256]; 

    printf("Enter a movement string (L, R, _): ");
    scanf("%255s", userInput); 

        int result = furthestDistanceFromOrigin(userInput);
        printf("The furthest distance possible is: %d\n", result);
}
