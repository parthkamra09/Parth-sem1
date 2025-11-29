
#include <stdio.h>
#include <string.h>

typedef struct {
    int book_id;
    char title[128];
    char author[64];
    double price;
} Book;

static void trim_newline(char *s)
{
    size_t ln = strlen(s);
    if (ln > 0 && s[ln - 1] == '\n') s[ln - 1] = '\0';
}
void printBook(Book b)
{
    printf("\nBook Details\n");
    printf("-----------\n");
    printf("ID     : %d\n", b.book_id);
    printf("Title  : %s\n", b.title);
    printf("Author : %s\n", b.author);
    printf("Price  : %.2f\n", b.price);
}

int main(void)
{
    Book b;
    int c;

    printf("Enter book id: ");
    if (scanf("%d", &b.book_id) != 1) return 1;
    while ((c = getchar()) != '\n' && c != EOF) { }

    printf("Enter title: ");
    if (!fgets(b.title, sizeof b.title, stdin)) return 1;
    trim_newline(b.title);

    printf("Enter author: ");
    if (!fgets(b.author, sizeof b.author, stdin)) return 1;
    trim_newline(b.author);

    printf("Enter price: ");
    if (scanf("%lf", &b.price) != 1) b.price = 0.0;

    printBook(b);
    return 0;
}