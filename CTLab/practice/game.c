#include <stdio.h>
#include <ctype.h>  // For isupper() and islower()

int main() {
    int a,b,c,point = 0;

    // Prompt user for input
    printf("Enter a x^2,x and constant: ");
    scanf(" %d%d%d",&a,&b,&c);

    // Check if the input is an uppercase letter
    if ((b*b)-(4*a*c)==0) {
        point = 0;
    }
    // Check if the input is a lowercase letter
    else if ((b*b)-(4*a*c)>0) {       
        point = 20;
    }
    // Handle case where input is not a letter
    else {       
        point = 10;
    }
    printf("points scored = %d\n",point);

    return 0;
}

