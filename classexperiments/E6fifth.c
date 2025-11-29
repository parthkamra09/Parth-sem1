
#include <stdio.h>
#include <string.h>

void REVERSE(char *s)
{
    if (!s) return;
    size_t i = 0, j = strlen(s);
    if (j == 0) return;
    j--; 
    while (i < j) {
        char tmp = s[i];
        s[i++] = s[j];
        s[j--] = tmp;
    }
}

int main(void)
{
    char buf[1024];
    printf("Enter a string: ");
    if (!fgets(buf, sizeof buf, stdin)) return 1;
    size_t ln = strlen(buf);
    if (ln > 0 && buf[ln - 1] == '\n') buf[--ln] = '\0';
    REVERSE(buf);
    printf("Reversed string: %s\n", buf);
    return 0;
}
