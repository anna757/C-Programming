/* Program that reads and analyzes input text:
    Number of characters in the text
    Vowel count
    number of seperators
    number of numbers
*/
#include <stdio.h>
#include <stdlib.h>
int main() {\
    int size, seperators, numbers, vowels;
    char input[150];
    printf("Enter an input");
    scanf("%s", input);
    size = sizeof(input);
    int i;
    for(i=0; i<size; i++) {
        if (input[i]== "A" | input[i]== "a" | input[i]== "O" | input[i]== "o" | input[i]== "I" | input[i]== "i" | input[i]== "E" | input[i]== "E" | input[i]== "U" | input[i]== "u") {
            vowels++;
            printf("%d", vowels);
        }
    }
    printf ("%d, %d", size, vowels);
    return 0;
}