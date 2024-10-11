#include <stdio.h>
#include "calc.h"

int main() {
    double a = 10.0;
    double b = 5.0;

    printf("Addition: %.2f\n", add(a, b));
    printf("Subtraction: %.2f\n", subtract(a, b));
    printf("Multiplication: %.2f\n", multiply(a, b));
    printf("Division: %.2f\n", divide(a, b));

    return 0;
}
