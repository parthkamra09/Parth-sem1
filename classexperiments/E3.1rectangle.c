#include <stdio.h>

void main() {
    int l1, b1, l2, b2, l3, b3;
    int p1, p2, p3, max;

    printf("Enter length and breadth of Rectangle 1: ");
    scanf("%d %d", &l1, &b1);

    printf("Enter length and breadth of Rectangle 2: ");
    scanf("%d %d", &l2, &b2);

    printf("Enter length and breadth of Rectangle 3: ");
    scanf("%d %d", &l3, &b3);


    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);


    if (p1 >= p2 && p1 >= p3) {
        printf("Rectangle 1 has the largest perimeter: %d\n", p1);
    } 
    else if (p2 >= p1 && p2 >= p3) {
        printf("Rectangle 2 has the largest perimeter: %d\n", p2);
    } 
    else {
        printf("Rectangle 3 has the largest perimeter: %d\n", p3);
    } 
    
}