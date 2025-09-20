#include <stdio.h>

void main() {
    int a,b,c;
    char op;

    printf("Enter two numbers and an operator (+, -, *, /, %%): ");
    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+':
            c = a + b;
            printf("%d\n", c);
            break;
        case '-':
            c = a - b;
            printf("%d\n", c);
            break;
        case '*':
            c = a * b;
            printf("%d\n", c);
            break;
        case '/':
            if (b != 0) {
                c = a / b;
                printf("%d\n", c);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if (b != 0) {
                c = a % b;
                printf("%d\n", c);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }
}