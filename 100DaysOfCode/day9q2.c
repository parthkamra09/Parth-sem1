#include<stdio.h>
int main(){
    int number;
    printf("enter the number : ");
    scanf("%d", &number);
    printf("Grade is : %d\n", number);


    if(number <= 100 && number >= 90){
        printf("GRADE A\n");
    }else if(number <= 89 && number >= 80){
        printf("GRADE B\n");
    }else if(number <= 79 && number >= 70){
        printf("GRADE C\n");
    }else if(number <=69 && number >= 60){
        printf("GRADE D\n");
    }else if(number < 60){
        printf("GRADE F\n");
    }
    return 0;
}