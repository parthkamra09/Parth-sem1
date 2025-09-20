#include<stdio.h>
void main(){
   float length,breadth;
   printf("enter length of rectangle:");
   scanf("%f",&length);
   printf("enter breadth of rectangle:");
   scanf("%f",&breadth);  
   printf("area of rectangle is: %f\n",length*breadth);
   printf("perimeter of rectangle is :%f\n", 2*(length+breadth)) ;

}