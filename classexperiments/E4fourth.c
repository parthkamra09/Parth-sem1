#include <stdio.h>
void counterFunction() {
    static int count = 0; 
    int normal = 0;       

    count++;  
    normal++;  

    printf("count = %d, normal = %d\n", count, normal);
}

int main() {
    printf("First call:\n");
    counterFunction();

    printf("Second call:\n");
    counterFunction();

    printf("Third call:\n");
    counterFunction();

    return 0;
}
