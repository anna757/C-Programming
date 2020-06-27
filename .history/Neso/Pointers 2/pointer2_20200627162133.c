#include <stdio.h>
int main () {
    int A[] = {1,2,3,4,4,5,6,7,7,432,2,4,6,6324};
    printf("%d, %d, %d, %d", A, &A[0], A[0], *A);
    //loop to print array elements and addresses of it
    int i;
    for(i=0; i<sizeof(A[]); i++) {
        printf("%d, %d, %d, %d\n\n", A+i, &A[i], A[i], *(A+i));

    }
}