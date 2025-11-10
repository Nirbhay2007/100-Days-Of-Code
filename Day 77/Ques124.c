//Q124: Copy file contents from source to destination
#include <stdio.h>

int main() {
    FILE *source, *destination;
    char source_file[50], dest_file[50];
    char ch;
    
    printf("Enter source filename: ");
    scanf("%s", source_file);
    
    printf("Enter destination filename: ");
    scanf("%s", dest_file);
    
    // Open source file in read mode
    source = fopen(source_file, "r");
    if (source == NULL) {
        printf("Error: Could not open source file!\n");
        return 1;
    }
    
    // Open destination file in write mode
    destination = fopen(dest_file, "w");
    if (destination == NULL) {
        printf("Error: Could not create destination file!\n");
        fclose(source);
        return 1;
    }
    
    // Copy character by character
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
    
    printf("\nFile copied successfully from %s to %s!\n", source_file, dest_file);
    
    // Close both files
    fclose(source);
    fclose(destination);
    
    return 0;
}