#include <stdio.h>
void main() {
    int year;
    double population= 100000;
    double rate= 0.10;

    printf("year\population\n");
    for(year=1; year<=10; year++)
    {
        population+=population=rate;
        printf("%d\t%.0f\n", year, population);
    }
}