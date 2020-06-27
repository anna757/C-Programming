//Arrays as function arguments
#include <stdio.h>
//we want to make an program that adds all the elements of the array together
int sumOfElements (int *A) {
    int i, sum = 0;
    int size = sizeof(A)/sizeof(A[0]);
    for (i=0; i<size; i++) {
        sum += A[i];
    }
    return sum;
}
int main () {
    int A[] = {1,2,3,4,5};
    int total = sumOfElements(A);
    printf("%d", total);
}