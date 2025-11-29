#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];
    fp = fopen("output.txt", "w");

    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    printf("Enter text into the file:\n");
    fgets(text, sizeof(text), stdin);
    fprintf(fp, "%s", text);

    printf("File created and text  successfully.\n");
    fclose(fp);
    return 0;
}
