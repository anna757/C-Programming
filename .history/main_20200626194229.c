/* Program that reads and analyzes input text:
    Number of characters in the text
    Vowel count
    number of seperators
    number of numbers
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int size, seperators, numbers, vowels;
    size = seperators = numbers = vowels = 0;
    char input[150];
    printf("Enter an input");
    scanf("%s", input);
    size = sizeof(input);
    int i;
    for(i=0; i<size; i++) {
        if (input[i]== 'A' | input[i]== 'a' || input[i]== 'O' || input[i]== 'o' 
           || input[i]== 'I' || input[i]== 'i' || input[i]== 'e' || input[i]== 'E' 
           || input[i]== 'U' || input[i]== 'u') {
            ++vowels;
            printf("HOER %d\n", vowels);
        }
        else if ((input[i] >= '0' && input[i] <= '9')) {
            ++numbers;
            printf("KANKER %d\n", numbers);
        }
    }
    printf ("%d, %d, %d", size, vowels, numbers);
    return 0;
}