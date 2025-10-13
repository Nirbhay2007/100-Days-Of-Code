//Q97: Print the initials of a name.
#include <stdio.h>

int main() {
    char name[100];
    int i = 0;
    
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Name: %s", name);
    printf("Initials: ");
    
    // Print first character if it's a letter
    if ((name[0] >= 'A' && name[0] <= 'Z') || (name[0] >= 'a' && name[0] <= 'z')) {
        if (name[0] >= 'a' && name[0] <= 'z') {
            printf("%c", name[0] - 32);  // Convert to uppercase
        } else {
            printf("%c", name[0]);
        }
    }
    
    // Find initials after spaces
    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] == ' ') {
            // Check next character after space
            if ((name[i+1] >= 'A' && name[i+1] <= 'Z') || (name[i+1] >= 'a' && name[i+1] <= 'z')) {
                if (name[i+1] >= 'a' && name[i+1] <= 'z') {
                    printf("%c", name[i+1] - 32);  // Convert to uppercase
                } else {
                    printf("%c", name[i+1]);
                }
            }
        }
        i++;
    }
    
    printf("\n");
    
    return 0;
}