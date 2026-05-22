#include <stdio.h>

int main(void) {
    int payCode = 0;
    double pay = 0;

    printf("Enter pay code (1-4, or -1 to quit): ");
    scanf("%d", &payCode);

    while (payCode != -1) {
        switch (payCode) {
            case 1: {
                double salary;
                printf("Enter weekly salary: ");
                scanf("%lf", &salary);
                pay = salary;
                break;
            }
            default:
                printf("Invalid pay code. Please enter 1-4.\n");
                break;
        }

        if (payCode >= 1 && payCode <= 4)
            printf("Weekly pay: %.2f\n\n", pay);

        printf("Enter pay code (1-4, or -1 to quit): ");
        scanf("%d", &payCode);
    }

    printf("Goodbye!\n");
    return 0;
}
