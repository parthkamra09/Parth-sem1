#include <stdio.h>

void main() {
    int choice, i, j, num = 1, n;

    printf("Choose a pattern to print:\n");
    printf("1. Triangle of consecutive numbers\n");
    printf("2. Pascal's Triangle\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        
        printf("Enter number of rows: ");
        scanf("%d", &n);

        num = 1;
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++) {
                printf("%d ", num);
                num++;
            }
            printf("\n");
        }
    }
    else if (choice == 2) {
    
        printf("Enter number of rows: ");
        scanf("%d", &n);

        for (i = 0; i < n; i++) {
            int val = 1;
            for (j = 0; j <= i; j++) {
                printf("%d ", val);
                val = val * (i - j) / (j + 1);
            }
            printf("\n");
        }
    }
    else {
        printf("Invalid choice!\n");
    }
}