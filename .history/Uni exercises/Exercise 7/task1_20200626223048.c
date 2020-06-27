//pointer code example
#include <stdio.h>
int main() {
    int a =5; int *p = &a;
    printf ("%d, %d, %d", p, *p, &a);
    return 0;
}