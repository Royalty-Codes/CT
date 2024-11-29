#include <stdio.h>
#include <ctype.h>

int main() {
    char input;
    int points = 0;

    // Prompt user for input
    printf("Enter a character: ");
    scanf(" %c", &input);

    // Check if the input is a vowel (both upper and lower case)
    if (input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U' ||
        input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u') {
        points = 5;
    }
    // Check if the input is a digit
    else if (isdigit(input)) {
        points = 10;
    }
    // If it's neither a vowel nor a digit, 0 points
    else {
        points = 0;
    }

    // Display the result
    printf("You scored %d points.\n", points);

    return 0;
}

