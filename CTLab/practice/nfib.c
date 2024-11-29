#include <stdio.h>
int main() {
int n, a = 0, b = 1, next;
// Step-2: Input the number of Fibonacci numbers to print
printf("Enter the number of Fibonacci numbers to print: ");
scanf("%d", &n);
int count = 1; // Start with the first Fibonacci number
// Step-4: Print Fibonacci numbers using while loop
while (count <= n) {
if (count == 1) {
printf("%d ", a); // Print the first Fibonacci number
} else if (count == 2) {
printf("%d ", b); // Print the second Fibonacci number
} else {
next = a + b; // Calculate the next Fibonacci number
printf("%d ", next);
a = b; // Move the second number to the first
b = next; // Update second to the new next
}
count++; // Increment count
}
printf("\n");
return 0;
}