#include <stdio.h>

void main() {
    int choice;

    printf("Choose the data type of the variable:\n");
   
    scanf("%d", &choice);

    switch(choice) {
        case 1: {
            int x;
            printf("Enter an int value: ");
            scanf("%d", &x);
           
            printf("Size of int variable: %lu bytes\n", sizeof(x));
            break;
        }
        case 2: {
            char c;
            printf("Enter a char value: ");
            scanf(" %c", &c);  
           
            printf("Size of char variable: %lu bytes\n", sizeof(c));
            break;
        }
        case 3: {
            float f;
            printf("Enter a float value: ");
            scanf("%f", &f);
            
            printf("Size of float variable: %lu bytes\n", sizeof(f));
             break;
        }
    
        default:printf("Invalid choice.\n");
    }
}
