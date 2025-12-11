#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;  // total rows and columns

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Find minimum distance from any border
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            int minDist = top;
            if (left < minDist) minDist = left;
            if (bottom < minDist) minDist = bottom;
            if (right < minDist) minDist = right;

            // Value decreases as we go inside
            int value = n - minDist;

            printf("%d ", value);
        }
        printf("\n");
    }

    return 0;
}

