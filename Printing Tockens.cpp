#include <stdio.h>

int main() {
    char sentence[1000];
    
    // Read the entire line including spaces
    fgets(sentence, sizeof(sentence), stdin);
    
    // Traverse each character
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') {
            printf("\n");   // print newline instead of space
        } else if (sentence[i] != '\n') {
            printf("%c", sentence[i]);   // print character
        }
    }
    
    return 0;
}

