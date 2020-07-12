#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    /*program that prints numbers from 1 to 100 on console.
    int i;
    for (i=0; i<=100; i++) {
        printf ("%d\n",i);
    }
    */

    //sherry sucks penis for a living
    int dicc[] = {1,2,3,4,5,6,7,4,3};
    int size = sizeof(dicc)/sizeof(dicc[0]);
    printf("size of dicc is: %d cm", size);

    char a[] = "1";
    char b[] = "2";
    char c[] = "3";
    char d[] = "4";
    int i;
    for(i = 6; i!=0; i--) {
        switch (i) {
            case 1: 
            printf("1\n"); break;
            case 2: printf("2\n"); break;
            case 3: printf("3\n"); break;
            case 4: printf("4\n"); break;
            case 5: printf("5\n"); break;
            case 6: printf("6\n"); break;
            default: printf("asdsas\n"); break;
            
        }
    } 
    return 0;
}