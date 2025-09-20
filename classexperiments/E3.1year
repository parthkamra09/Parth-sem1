#include <stdio.h>

int main() {
    int year, i, leapCount = 0, normalCount = 0, totalDays, day;

    printf("Enter year: ");
    scanf("%d", &year);

    // Count leap and normal years between 1 and (year-1)
    for(i = 1; i < year; i++) {
        if((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0)) {
            leapCount++;
        } else {
            normalCount++;
        }
    }

    // Total days shift from 01/01/01
    totalDays = (leapCount * 2) + (normalCount * 1);

    // Since 01/01/01 was Monday, base = 1
    day = (1 + totalDays) % 7;

    // Map remainder to day of week using only conditionals
    if(day == 1)
        printf("Monday\n");
    else if(day == 2)
        printf("Tuesday\n");
    else if(day == 3)
        printf("Wednesday\n");
    else if(day == 4)
        printf("Thursday\n");
    else if(day == 5)
        printf("Friday\n");
    else if(day == 6)
        printf("Saturday\n");
    else
        printf("Sunday\n");

    return 0;
}
