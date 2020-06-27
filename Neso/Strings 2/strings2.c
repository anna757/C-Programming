#include <stdio.h>
int main () {
    int array[4];
    int i = 0;
    while(i < sizeof(array)/sizeof(int)) {
        array[i++] = i;
    }
    printf("%d,%d,%d,%d\n",array[0],array[1],array[2],array[3]);
    
    int array2[4];
    int j = 0;
    while(j < sizeof(array2)/sizeof(int)) {
        array2[j] = j++;
        }
        printf("%d,%d,%d,%d",array2[0],array2[1],array2[2],array2[3]);
    return 0;
}