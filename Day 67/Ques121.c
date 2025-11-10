//Q121: Create file and write user data using fprintf()
#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int age;
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    // Create and open file in write mode
    file = fopen("info.txt", "w");
    
    if (file == NULL) {
        printf("Error: Could not create file!\n");
        return 1;
    }
    
    // Write data to file
    fprintf(file, "Name: %s", name);
    fprintf(file, "Age: %d\n", age);
    
    // Close file
    fclose(file);
    
    printf("\nData successfully saved to info.txt!\n");
    
    return 0;
}