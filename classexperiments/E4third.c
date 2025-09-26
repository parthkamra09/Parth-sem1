#include <stdio.h>

int main() {
    int a = 100; 
    printf("In main block: a = %d\n", a);

    {
        int b = 200; 
        printf("In inner block: a = %d, b = %d\n", a, b);

        {
            int c = 300;
            printf("In nested block: a = %d, b = %d, c = %d\n", a, b, c);
        } 
    }
    printf("Back in main block: a = %d\n", a);

    return 0;
}
