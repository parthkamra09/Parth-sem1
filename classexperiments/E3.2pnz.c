#include <stdio.h>

void main() {
    int num;
    int pos , neg , zero ;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;

        printf("Do you want to continue (y/n)? ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nCount of positive numbers = %d\n", pos);
    printf("Count of negative numbers = %d\n", neg);
    printf("Count of zeros = %d\n", zero);
}