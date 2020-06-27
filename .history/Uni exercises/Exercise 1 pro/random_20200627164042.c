#include <stdio.h>
int main() {
    char string[150];
    int vowels, consonant, digit, space;

    vowels = consonant = digit = space = 0;

    printf("Enter a string of string: ");
    fgets(string, sizeof(string), stdin);
    for (int i = 0; string[i] != '\0'; ++i) {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' ||
            string[i] == 'o' || string[i] == 'u' || string[i] == 'A' ||
            string[i] == 'E' || string[i] == 'I' || string[i] == 'O' ||
            string[i] == 'U') {
            ++vowels;
        } else if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z')) {
            ++consonant;
        } else if (string[i] >= '0' && string[i] <= '9') {
            ++digit;
        } else if (string[i] == ' ' || string[i] == '+' || string[i] == '-' ||string[i] == '*'  ||string[i] == '/' ||string[i] == ',') {
            ++space;
        }
    }

    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    printf("\nDigits: %d", digit);
    printf("\nSeperators: %d", space);
    return 0;
}
