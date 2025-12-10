#include <stdio.h>

int main() {
    int a, b;
    float x, y;

    // Reading two integers
    scanf("%d %d", &a, &b);

    // Reading two floats
    scanf("%f %f", &x, &y);

    // Printing sum and difference of integers
    printf("%d %d\n", a + b, a - b);

    // Printing sum and difference of floats with 1 decimal place
    printf("%.1f %.1f\n", x + y, x - y);

    return 0;
}

