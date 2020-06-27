#include <stdio.h>
//exercise to find the largest and smallest element in an array 
//first we create a function to to make the elements min or max
void minMax(int arr[], int len, int *min, int *max) {
    *min = *max = arr[0]; //we assign both to the first element of the array
    int i;
    for (i=0; i<len; i++) { //we loop through the array with the condition that it is smaller than the size of array elements
        if (arr[i]> *max) { //if the element is bigger than the first element, assign it to max and so on
            *max = arr[i];
        }
        if (arr[i]< *min) { //if the element is smaller than the first element, assign it to min and so on
            *min = arr[i];
        }
    }
}

//actual function
int main() {
    int a[]= {23,45,6,98,56,767,43534,2342346,45654,4,34,3,2,6436,7854,4344};
    int min,max,i;
    int len = sizeof(a)/sizeof(a[0]);
    minMax(a, len, &min, &max);
    printf("minimum value of the array is %d, and max is %d", min, max);
    return 0;
}