#include <stdio.h>
int main () {
int a, b;
printf ("Enter two numbers: ");
Scanf ("%d %d", &a, &b);
Printf ("\n Results using macros:\n");
printf ("Addition:%d +%d = %d\n", a, b, SUM (a, b));
printf("Subtraction: %d - %d = %d\n", a, b, DIF (a, b));
printf("Multiplication: %d * %d = %d\n", a, b, PRO (a, b));
if (b!=0)
printf("Division: %d / %d = %d\n", a, b, DIV (a, b));
else
printf("Division by zero is not allowed.\n");
}