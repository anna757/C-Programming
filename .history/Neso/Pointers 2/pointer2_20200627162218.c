#include <stdio.h>
int main () {
    int A[] = {1,2,3,4,4};
    printf("%d, %d, %d, %d\n", A, &A[0], A[0], *A);
    //loop to print array elements and addresses of it
    int i;
    for(i=0; i<5; i++) {
        printf("%d, %d, %d, %d\n\n", A+i, &A[i], A[i], *(A+i));

    }
}