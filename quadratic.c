#include <stdio.h>
#include <math.h>  
int main() {
    float a, b, c, discriminant, root1, root2;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;

    switch (discriminant > 0) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
            break;
        case 0:  
            switch (discriminant == 0) {
                case 1:  
                    root1 = -b / (2 * a);
                    printf("Roots are real and equal: %.2f and %.2f\n", root1, root1);
                    break;
                case 0: 
                    printf("Roots are complex.\n");
                    break;
            }
            break;
    }

    return 0;
}