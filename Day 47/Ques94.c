//Q94: Find the longest word in a sentence.
#include <stdio.h>

int main() {
    char sentence[100];
    int i = 0, current_length = 0, max_length = 0;
    int start_pos = 0, longest_start = 0;
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    printf("Sentence: %s", sentence);
    
    while (sentence[i] != '\0' && sentence[i] != '\n') {
        if (sentence[i] != ' ') {
            if (current_length == 0) {
                start_pos = i;  // Mark start of word
            }
            current_length++;
        } else {
            // End of word
            if (current_length > max_length) {
                max_length = current_length;
                longest_start = start_pos;
            }
            current_length = 0;
        }
        i++;
    }
    
    // Check last word
    if (current_length > max_length) {
        max_length = current_length;
        longest_start = start_pos;
    }
    
    printf("Longest word: ");
    for (i = longest_start; i < longest_start + max_length; i++) {
        printf("%c", sentence[i]);
    }
    printf("\n");
    printf("Length: %d\n", max_length);
    
    return 0;
}