//Q125: Append text to existing file
#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char text[200];
    
    printf("Enter filename to append to: ");
    scanf("%s", filename);
    getchar();  // Clear newline from buffer
    
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    
    // Open file in append mode
    file = fopen(filename, "a");
    
    if (file == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }
    
    // Append text to file
    fprintf(file, "%s", text);
    
    fclose(file);
    
    printf("\nText successfully appended to %s!\n", filename);
    
    return 0;
}