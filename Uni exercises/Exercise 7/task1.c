//program to test whether a string contains a palindrome
//so a palindrome is a string with letters mirrored, if this was a number, we would use %10 and /10
//here we need an array and pointers
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void isPalindrome(char *input, int size) {
    char *p = input;
    while (*p != '\0') {
        printf("%c\n", *p);
        p++;
    }
    while (*p == size-*p-1) {
        printf("%c", *p);
        p--;
    }
    return;
    }
int main() {
    char input[150];
    printf("Enter a string: ");
    scanf("%s", input);
    int size = strlen(input);
    isPalindrome(input, size);
    return 0;
}