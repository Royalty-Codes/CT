#include <stdio.h>

int main() {
    float a, b, c, amount;

    // Prompt the user to input coefficients a, b, and c
    printf("Enter amount: ");
    scanf("%f", &amount);
    // Check the nature of the roots based on the discriminant
    if (amount <= 1000) {
        a= amount-(0.05*amount);
        printf("Discounted price: %.2f\n",a);
        
    } 
    else if ((amount>=1001)&&(amount<=5000)) {
        b= amount-(0.1*amount);
        printf("Discounted price: %.2f\n",b);
        
    } 
    else {
        c= amount-(0.2*amount);
        printf("Discounted price: %.2f\n",c);
        
    }

    

    return 0;
}

