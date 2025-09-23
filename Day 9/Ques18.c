//Q18: Assign a grade based on percentage with validation.
#include <stdio.h>

int main() {
    int percentage;
    
    printf("Enter your percentage: ");
    scanf("%d", &percentage);
    
    // Check if percentage is valid (0-100)
    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage! Please enter a value between 0 and 100.\n");
        return 1;
    }
    
    // Assign grades based on percentage ranges
    if (percentage >= 90) {
        printf("Grade A\n");
    }
    else if (percentage >= 80) {
        printf("Grade B\n");
    }
    else if (percentage >= 70) {
        printf("Grade C\n");
    }
    else if (percentage >= 60) {
        printf("Grade D\n");
    }
    else {
        printf("Grade F\n");
    }
    
    return 0;
}
