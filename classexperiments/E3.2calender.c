#include <stdio.h>

int main() {
    int year, i, days = 0, day;
    printf("Enter the year: ");
    scanf("%d", &year);

   
    for(i = 1; i < year; i++) {
        if((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0)) {
            days += 366; 
        } else {
            days += 365; 
    }

    day = (days % 7); 

    printf("01/01/%d is ", year);
    if(day == 0)
        printf("Monday");
    else if(day == 1)
        printf("Tuesday");
    else if(day == 2)
        printf("Wednesday");
    else if(day == 3)
        printf("Thursday");
    else if(day == 4)
        printf("Friday");
    else if(day == 5)
        printf("Saturday");
    else if(day == 6)
        printf("Sunday");

    return 0;
}
}
