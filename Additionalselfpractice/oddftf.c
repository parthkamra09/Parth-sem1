#include<stdio.h>
void main(){
    
    for(int i=5; i<=50; i=i+1){
        if(i%2==0){
            continue;
        }
        printf("%d\n",i);
    }
}