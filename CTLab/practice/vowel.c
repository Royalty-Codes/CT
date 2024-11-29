#include <stdio.h>

int main() {
    char ch;

    // Input character
    printf("Enter a character: ");
    scanf(" %c", &ch);  // The space before %c is used to consume any leftover newline

    // Switch-case to check for vowel or consonant
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
            break;
    }

    return 0;
}

