#include<stdio.h>
void main(){
    
    for(int i=1; i<=10; i=i+1){
        if(i==6){
            continue;
        }
        printf("%d\n",i);
    }
}