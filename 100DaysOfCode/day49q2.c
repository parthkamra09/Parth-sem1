#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, lastSpace = -1;

    fgets(str, sizeof(str), stdin);

    
    while (str[i] != '\0') {
        if (str[i] == ' ')
            lastSpace = i;
        i++;
    }

    
    if (str[0] != ' ' && str[0] != '\n')
        printf("%c.", str[0]);

    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] == ' ' && i != lastSpace && str[i+1] != ' ' && str[i+1] != '\n') {
            printf("%c.", str[i+1]);
        }
    }

    
    printf(" ");

    
    for (i = lastSpace + 1; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c", str[i]);
    }

    return 0;
}