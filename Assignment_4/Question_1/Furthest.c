#include <stdio.h>

int furthestDistanceFromOrigin(const char moves[]);

int main() {
char userInput[256]; 
int isValid = 1; 

printf("Enter a movement string (L, R, _): ");
scanf("%255s", userInput); 

int i = 0;
while (userInput[i] != '\0') {
    char current = userInput[i];
        
    if (current != 'L' && current != 'R' && current != '_') {
        isValid = 0; 
        break;     
    }
    i++; 
}
if (isValid == 0) {
    printf("Error: Invalid characters detected. Use only L, R, or _.\n");
} else {
    int result = furthestDistanceFromOrigin(userInput);
    printf("The furthest distance possible is: %d\n", result);
}
}
