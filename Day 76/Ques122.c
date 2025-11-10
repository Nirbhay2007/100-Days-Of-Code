//Q122: Read file contents using fgets()
#include <stdio.h>

int main() {
    FILE *file;
    char line[200];
    
    // Open file in read mode
    file = fopen("info.txt", "r");
    
    if (file == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }
    
    printf("Contents of info.txt:\n");
    printf("---------------------\n");
    
    // Read and print each line
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    
    printf("---------------------\n");
    
    // Close file
    fclose(file);
    
    return 0;
}