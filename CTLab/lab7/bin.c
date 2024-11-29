#include <stdio.h>

void bin(int a); // Change return type to void since it doesn't return a value

int main() {
    int a;
    printf("Enter decimal number: ");
    scanf("%d", &a);
    bin(a); // Call the function to print binary
    printf("\n"); // Newline for cleaner output
    return 0;
}

void bin(int a) {
    int i = 0;
    int b[32];

    if (a == 0) {
        printf("0");
        return;
    }

    // Store binary digits in array
    while (a > 0) {
        b[i] = a % 2;
        a /= 2; // Fix division
        i++;
    }

    // Print binary digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", b[j]);
    }
}

