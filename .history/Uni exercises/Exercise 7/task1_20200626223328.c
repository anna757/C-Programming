//pointer code example
#include <stdio.h>
int main() {
    int a =5;
    int *p = &a;
    int b = 30;
    printf ("%d, %d, %d\n\n", p, *p, &a);
    *p = b; //replaces the value of a with b NOT the address
    printf("%d, %d", p, *p);
    return 0;
}