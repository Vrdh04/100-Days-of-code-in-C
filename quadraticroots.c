#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double d, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("It is not a quadratic equation.\n");
        return 0;
    }

    // Calculate discriminant
    d = b * b - 4 * a * c;

    if (d > 0) {
        // Real and distinct roots
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    else if (d == 0) {
        // Real and equal roots
        root1 = -b / (2 * a);

        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }
    else {
        // Complex roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-d) / (2 * a);

        printf("Roots are complex.\n");
        printf("Root 1 = %.2lf + %.2lfi\n",
               realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n",
               realPart, imaginaryPart);
    }

    return 0;
}
