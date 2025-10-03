//Q86: Check if a string is a palindrome.
#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i, isPalindrome = 1;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    
    printf("String: ");
    for (i = 0; i < length; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    
    printf("Length: %d\n", length);
    
    printf("\nChecking palindrome:\n");
    for (i = 0; i < length / 2; i++) {
        printf("Comparing str[%d] = '%c' with str[%d] = '%c': ", 
               i, str[i], length - 1 - i, str[length - 1 - i]);
        
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            printf("Not equal\n");
            break;
        } else {
            printf("Equal\n");
        }
    }
    
    if (isPalindrome) {
        printf("\nResult: The string is a PALINDROME!\n");
    } else {
        printf("\nResult: The string is NOT a palindrome.\n");
    }
    
    return 0;
}