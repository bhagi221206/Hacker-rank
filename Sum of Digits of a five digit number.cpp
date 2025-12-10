#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input: a five-digit number
    scanf("%d", &n);

    // Loop until all digits are extracted
    while (n > 0) {
        sum += n % 10;  // get last digit
        n /= 10;        // remove last digit
    }

    // Output: sum of digits
    printf("%d\n", sum);

    return 0;
}

