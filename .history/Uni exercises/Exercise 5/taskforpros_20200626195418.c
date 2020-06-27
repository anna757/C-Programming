#include <stdio.h>
#include<stdlib.h>
#include<math.h>
//number guessing game that uses input validation 
int random () {
    srand (time(NULL));
    int n = 5;
    for (int i =0; i<n; i++) {
        printf("%d\n", rand() %50);
    }
return 0;
}