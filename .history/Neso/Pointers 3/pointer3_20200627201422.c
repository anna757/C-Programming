//Arrays as function arguments
#include <stdio.h>
// *(a+i) = a[i]
//you cannot increment an array but you can increment a pointer which points to the value of the array
//we want to make an program that adds all the elements of the array together
int sumOfElements (int A[], int size) { //here, int A[] is equal to int *A
    int i, sum = 0;
    for (i=0; i<size; i++) {//we loop through the elements and add them together
        sum += A[i];
    }
    return sum;
}
int main () {
    int A[] = {1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);//the size calculation should ALWAYS be in the function where the array is initialized
    int total = sumOfElements(A, size);
    printf("%d", total);
}