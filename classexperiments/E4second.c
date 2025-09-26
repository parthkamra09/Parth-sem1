#include <stdio.h>


int globalVar = 50;

void testLocal() {
    int localVar = 10;  
    printf("Inside testLocal(): globalVar = %d\n", globalVar);
}

int main() {
    printf("Inside main(): globalVar = %d\n", globalVar);

    testLocal();
    return 0;
}
