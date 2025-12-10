#include <stdio.h>
#include <string.h>

int main() {
    char s[100];  // buffer to store input string
    
    // Read input string (including spaces)
    fgets(s, sizeof(s), stdin);
    
    // Remove newline character if present
    s[strcspn(s, "\n")] = '\0';
    
    // Print required output
    printf("Hello, World!\n");
    printf("%s\n", s);
    
    return 0;
}



    
  	


