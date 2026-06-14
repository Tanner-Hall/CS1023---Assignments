#include <stdio.h>

void add(double a, double b);
void subtract(double a, double b);
void multiply(double a, double b);
void divide(double a, double b);

int main(void) {
void (*operations[4])(double, double) = {add, subtract, multiply, divide};
int choice = 0;
double num1 = 0.0;
double num2 = 0.0;
while (1) {
printf("\n");
printf("            MATHEMATICAL MENU            \n");
printf("\n");
printf("  1. Add two numbers\n");
printf("  2. Subtract two numbers\n");
printf("  3. Multiply two numbers\n");
printf("  4. Divide two numbers\n");
printf("  5. Exit the program\n");
printf("\n");
printf("Enter your choice (1-5): ");
if (scanf("%d", &choice) != 1) {
    printf("\nError: Invalid input type. Please enter a number.\n\n");
    while (getchar() != '\n'); 
    continue;
}
if (choice == 5) {
printf("\nExiting program. Goodbye!\n");
break;
}
if (choice < 1 || choice > 5) {
    printf("\nError: Invalid selection. Please choose between 1 and 5.\n\n");
    continue;
}
printf("Enter first double value: ");
scanf("%lf", &num1);
printf("Enter second double value: ");
scanf("%lf", &num2);
printf("\n");
(*operations[choice - 1])(num1, num2);
printf("\n");
}
}
void add(double a, double b) {
printf("[CALCULATION TYPE]: Addition\n");
printf("[INPUT PARAMETERS]: Value A = %.4f | Value B = %.4f\n", a, b);
printf("[EXECUTION RESULT]: %.4f + %.4f = %.4f\n", a, b, a + b);
}
void subtract(double a, double b) {
printf("[CALCULATION TYPE]: Subtraction\n");
printf("[INPUT PARAMETERS]: Value A = %.4f | Value B = %.4f\n", a, b);
printf("[EXECUTION RESULT]: %.4f - %.4f = %.4f\n", a, b, a - b);
}
