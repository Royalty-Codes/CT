#include<stdio.h>
#include<math.h>

int main()
{
    int n, original, remainder, result = 0, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n; // Store the original number

    // Find the number of digits in n
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Calculate the sum of each digit raised to the power of the number of digits
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    // Check if the result is equal to the original number
    if (result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}

