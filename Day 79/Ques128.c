//Q128: Count vowels and consonants in file
#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char ch;
    int vowels = 0, consonants = 0;
    
    printf("Enter filename: ");
    scanf("%s", filename);
    
    file = fopen(filename, "r");
    
    if (file == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }
    
    while ((ch = fgetc(file)) != EOF) {
        // Convert to lowercase for easier checking
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }
        
        // Check if alphabetic
        if (ch >= 'a' && ch <= 'z') {
            // Check if vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    
    fclose(file);
    
    printf("\nFile Analysis:\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Total alphabetic characters: %d\n", vowels + consonants);
    
    return 0;
}