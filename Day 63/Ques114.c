//Q114: Length of longest substring without repeating characters
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, k;
    int max_length = 0;
    
    printf("Enter a string: ");
    scanf("%s", s);
    
    int len = strlen(s);
    printf("String: %s\n", s);
    printf("Length: %d\n", len);
    
    // Check all substrings
    for (i = 0; i < len; i++) {
        int visited[256] = {0};  // Track visited characters
        
        for (j = i; j < len; j++) {
            // If character already visited, break
            if (visited[(int)s[j]] == 1) {
                break;
            }
            
            visited[(int)s[j]] = 1;
            int current_length = j - i + 1;
            
            if (current_length > max_length) {
                max_length = current_length;
            }
        }
    }
    
    printf("Length of longest substring without repeating characters: %d\n", max_length);
    
    return 0;
}