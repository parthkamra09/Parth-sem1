#include <stdio.h>

void main() {
    float weight,height,bmi;

    printf("Enter your weight(kgs): ");
    scanf("%f",&weight);
    printf("Enter your height(ms): ");
    scanf("%f",&height);
    bmi=weight/(height*height);
    printf("Your BMI is: %f\n",bmi);
     if(bmi<15.0){
        printf("Starvation\n");
     }
    else if(bmi>=15.0 && bmi<17.5)
   {
        printf("Anorexic\n"); 
    }
    else if(bmi>=17.6 && bmi<18.5)
    {
        printf("underweight\n");
    }
    else if(bmi>=18.5 && bmi<24.9)
    {
        printf("ideal weight\n");
    }
    else if(bmi>=25 && bmi<29.9)
    {
        printf("overweight\n");
    }
    else if(bmi>=30.0 && bmi<39.9)
    {
        printf("obese\n");
    }
    else
    {
        printf("Morbidity Obese\n");
    }
}

  