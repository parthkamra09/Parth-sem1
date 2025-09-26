#include <stdio.h>

int globalVar = 10;

void display() {
    printf("Inside display(): globalVar = %d\n", globalVar);
}

void modify() {
    globalVar += 5; 
    printf("Inside modify(): globalVar = %d\n", globalVar);
}

int main() {
    printf("Inside main(): globalVar = %d\n", globalVar);

    display();  
    modify();   
    display();  
    return 0;
}
