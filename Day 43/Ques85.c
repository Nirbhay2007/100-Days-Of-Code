//Q85: Reverse a string.
#include <stdio.h>

int main() {
    char str[100], reversed[100];
    int length = 0, i;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Find length manually
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    
    // Reverse the string
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0';  // Null terminate
    
    printf("Original string: ");
    for (i = 0; i < length; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    
    printf("Reversed string: %s\n", reversed);
    
    // Show step-by-step reversal
    printf("\nStep-by-step reversal:\n");
    for (i = 0; i < length; i++) {
        printf("Position %d: '%c' -> Position %d\n", i, str[i], length - 1 - i);
    }
    
    return 0;
}