//Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>

int main() {
    char sentence[100];
    int i = 0, word_start = 0, word_end;
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    printf("Original sentence: %s", sentence);
    
    while (sentence[i] != '\0' && sentence[i] != '\n') {
        // Find start of word
        if (sentence[i] != ' ') {
            word_start = i;
            
            // Find end of word
            while (sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n') {
                i++;
            }
            word_end = i - 1;
            
            // Reverse the word
            int start = word_start;
            int end = word_end;
            while (start < end) {
                char temp = sentence[start];
                sentence[start] = sentence[end];
                sentence[end] = temp;
                start++;
                end--;
            }
        } else {
            i++;
        }
    }
    
    printf("Sentence with reversed words: %s", sentence);
    
    return 0;
}