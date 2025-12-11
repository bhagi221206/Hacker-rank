#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);   // read size of array
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   // read elements
    }
    
    // Print in reverse order
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
    

