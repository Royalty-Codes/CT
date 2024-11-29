#include <stdio.h>

int prime(int a); // Change return type to void since it doesn't return a value
int main() {
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    if(a<=1)
    printf("not a prime\n");
    else
    prime(a); // Call the function to print binary
    
    printf("\n"); // Newline for cleaner output
    return 0;
}

int prime(int a) {
    // Print binary digits in reverse order
    for (int i=2; i<=(a/2); i++) {
        if(a%i==0)
        {printf("not prime\n");
        break;
        }
        
        
       
    }
}
