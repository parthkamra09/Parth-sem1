#include <stdio.h>

void main() {

    float cp,sp,p,l,pp,lp;
    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        p = sp - cp;
        pp = (p / cp) * 100;
        printf("Profit %f%%\n", pp);
    } else if (cp > sp) {
        l = cp - sp;
        lp = (l / cp) * 100;
        printf("Loss %f%%\n", lp);
    } else {
        printf("No Profit No Loss\n");
    }

}