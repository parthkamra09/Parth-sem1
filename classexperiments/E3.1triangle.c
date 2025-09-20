#include <stdio.h>

void main() {
    int a,b,c;

    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d", &a,&b,&c);
   
    if (a + b > c && a + c > b && b + c > a) {
        printf("Valid Triangle\n");

        if (a == b && b == c) {
            printf("equlateral triangle\n");
        } 
        else if (a == b || b == c || a == c) {
            printf("isoceles triangle\n");
        } 
        else if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)) {
            printf("right angled triangle\n");
        } 
        else {
            printf("scalene triangle\n");
        }
    } 
    else {
        printf("not a valid traingle\n");
    }
}