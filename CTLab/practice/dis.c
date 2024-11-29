#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart,p;

    // Input coefficients a, b, and c
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;
    p = sqrt (discriminant);

    // Switch-case based on the discriminant's sign
    int flag;
    if (discriminant > 0)
        flag = 1;
    else if (discriminant == 0)
        flag = 0;
    else
        flag = -1;

    switch (flag) {
        case 1:  // Positive discriminant (real and distinct roots)
            root1 = (-b + p) / (2 * a);
            root2 = (-b - p) / (2 * a);
            printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
            break;

        case 0:  // Zero discriminant (real and equal roots)
            root1 = -b / (2 * a);
            printf("Roots are real and equal: %.2f\n", root1);
            break;

        case -1:  // Negative discriminant (complex roots)
            realPart = -b / (2 * a);
            imaginaryPart = p / (2 * a);
            printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
            break;
    }

    return 0;
}

