
#include <stdio.h>
#include <stdlib.h>  // for malloc and free

int main() {
    int n;
    scanf("%d", &n);  // read size of array

    // dynamically allocate memory for n integers
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {  // check if malloc failed
        printf("Memory allocation failed\n");
        return 1;
    }

    // read n integers into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // calculate sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // print result
    printf("%d\n", sum);

    // free allocated memory
    free(arr);

    return 0;
}

