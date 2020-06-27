//reversing a series of numbers using pointers
#include <stdio.h>
#define N 5

int main () {
    int a[N], *p;
    printf("Enter %d elements in the array: ", N);
    for (p=a; p<= a+N-1; p++) {//the pointer is initialized with the initial address of the array
        scanf("%d", p);
    }    
    printf("Elements in reverse order are: \n");
    for(p=a+N-1;p >= a; p--) 
    printf("%d ", *p);
    return 0;
}