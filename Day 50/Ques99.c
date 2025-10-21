//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main() {
    char date[20];
    char day[3], month[3], year[5];
    char months[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                          "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int i = 0, j = 0, month_num;
    
    printf("Enter date in dd/mm/yyyy format: ");
    fgets(date, sizeof(date), stdin);
    
    printf("Original date: %s", date);
    
    // Extract day
    while (date[i] != '/' && date[i] != '\0') {
        day[j] = date[i];
        i++;
        j++;
    }
    day[j] = '\0';
    
    // Skip '/'
    i++;
    j = 0;
    
    // Extract month
    while (date[i] != '/' && date[i] != '\0') {
        month[j] = date[i];
        i++;
        j++;
    }
    month[j] = '\0';
    
    // Skip '/'
    i++;
    j = 0;
    
    // Extract year
    while (date[i] != '\0' && date[i] != '\n') {
        year[j] = date[i];
        i++;
        j++;
    }
    year[j] = '\0';
    
    // Convert month string to number
    month_num = 0;
    if (month[1] != '\0') {
        month_num = (month[0] - '0') * 10 + (month[1] - '0');
    } else {
        month_num = month[0] - '0';
    }
    
    // Print formatted date
    printf("Formatted date: %s-%s-%s\n", day, months[month_num - 1], year);
    
    return 0;
}