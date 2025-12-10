#include <stdio.h>
#include <stdlib.h>  // for abs()

void update(int *a, int *b) {
    int sum = *a + *b;          // calculate sum
    int diff = abs(*a - *b);    // calculate absolute difference
    *a = sum;                   // update value at pointer a
    *b = diff;                  // update value at pointer b
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);
    return 0;
}

