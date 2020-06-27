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

    //program that outputs a total of20 numbers from this row: 1 2 4 8 16 32 64 128 256 512 1024 ...
        int i;
    for (i=1; i<=20; i++) {
        i *=2;
        printf ("%d\n",i);
    }
    return 0;
}