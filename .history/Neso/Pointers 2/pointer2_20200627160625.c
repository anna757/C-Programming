#include <stdio.h>
int main () {
    int A[] = {1,2,3,4,4,5,6,7,7,432,2,4,6,6324};
    printf("%d, %d, %d, %d", A, &A[0], A[0], *A);
}