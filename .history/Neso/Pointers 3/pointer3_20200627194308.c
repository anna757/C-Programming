//Arrays as function arguments
#include <stdio.h>
// *(a+i) = a[i]
//we want to make an program that adds all the elements of the array together
int sumOfElements (int *A, int size) {
    int i, sum = 0;
    for (i=0; i<size; i++) {
        sum += A[i];
    }
    return sum;
}
int main () {
    int A[] = {1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    int total = sumOfElements(A, size);
    printf("%d", total);
}