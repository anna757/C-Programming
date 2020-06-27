	#include <stdio.h>//program that calculates the sum of rows and columns
    int main(){    
        int array[5][5] = { {8,3,9,0,10}, {3,5,17,1,1},
                             {2,8,6,23,1}, {15,7,3,2,9}, {6,14,2,6,0} };
        int sum = 0;
        int sum2 = 0;
        for (int i = 0; i < 5; i++) {
            printf("Enter row %d:", i + 1);
            for (int j = 0; j < 5; j++) {
                printf(" %d", array[i][j]);
                sum += array[i][j];
                sum2 += array[j][i];

            }
            printf("\n sum of rows: %d\n sum of columns: %d\n", sum, sum2);
            sum = 0;
            sum2 = 0;
        }
}