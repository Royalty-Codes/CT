#include <stdio.h>
#include <ctype.h>  // For isupper() and islower()

int main() {
    char input;

    // Prompt user for input
    printf("Enter a character: ");
    scanf(" %c", &input);

    // Check if the input is an uppercase letter
    if (isupper(input)) {
        printf("You entered an uppercase letter: %c\n", input);
    }
    // Check if the input is a lowercase letter
    else if (islower(input)) {
        printf("You entered a lowercase letter: %c\n", input);
    }
    // Handle case where input is not a letter
    else {
        printf("You did not enter a letter.\n");
    }

    return 0;
}

