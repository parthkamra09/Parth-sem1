#include <stdio.h>

int main() {
    long long num;
    scanf("%lld", &num);

    int freq[10] = {0};   

    
    while(num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    
    int maxDigit = 0;
    int maxFreq = freq[0];

    for(int i = 1; i < 10; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("%d", maxDigit);

    return 0;
}