#include <stdio.h>

int main(void) {
    int choice;
    double a, b;

    printf("=== C Smart Calculator ===\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Choose an operation (1-4): ");

    if (scanf("%d", &choice) != 1 || choice < 1 || choice > 4) {
        printf("Invalid choice.\n");
        return 1;
    }

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (choice) {
        case 1: printf("Result: %.2f\n", a + b); break;
        case 2: printf("Result: %.2f\n", a - b); break;
        case 3: printf("Result: %.2f\n", a * b); break;
        case 4:
            if (b == 0) printf("Cannot divide by zero.\n");
            else printf("Result: %.2f\n", a / b);
            break;
    }
    return 0;
}
