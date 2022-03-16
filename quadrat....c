/*
    Quadratic program,
    by, Naboth Akoyo,
    Feb 2022,
    MIT License,
    C99 Compiler,
*/

#include <stdio.h>
#include <math.h>


int main() {
    double a, b, c, discriminant, root1, root2; // x is the root of the equation. so, x = root

    printf("Enter values of a, b and c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c; // b^2 - 4ac

    // If b^2 − 4ac = 0 then Equation has two equal values.
    if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("The euation has two equal values\nx = %.2lf\n", root1);
    }

    // If b^2 − 4ac > 0 then Equation has two distinct values.
    else if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The Equation has two distinct values.\n x = %.2lf\n x = %.2lf\n", root1, root2);
    }

    // If b^2 − 4ac < 0 then Equation has no roots.
    else {
        printf("The equation has no roots...");
    }

    return 0;
}
