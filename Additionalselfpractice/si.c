#include <stdio.h>
void main() {
    float principle,rate,time,simpleinterest;
    printf("Enter principle : ");
    scanf("%f", &principle);
    printf("Enter rate of intrest: ");
    scanf("%f", &rate);
    printf("enter time:");
    scanf("%f",&time);
    printf("Simple interest is: %f\n", (principle*rate*time)/100);
}