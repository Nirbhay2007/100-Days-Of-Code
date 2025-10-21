//Q100: Print all sub-strings of a string.
#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i, j, k;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Find length
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    
    printf("String: ");
    for (i = 0; i < length; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    
    printf("Length: %d\n", length);
    printf("\nAll substrings:\n");
    
    int count = 0;
    
    // Generate all substrings
    for (i = 0; i < length; i++) {
        for (j = i; j < length; j++) {
            count++;
            printf("%d. ", count);
            
            // Print substring from i to j
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    
    printf("\nTotal substrings: %d\n", count);
    
    return 0;
}