
#include <stdio.h> 
int main() { 
    FILE *file; 
    char textToWrite[] = "Hello, this is some text."; 
    char buffer[100]; 
    // Writing text to a file 
    file = fopen("example.txt", "w"); 
    if (file == NULL) { 
        perror("Error opening file for writing"); 
        return 1; 
    } 
    fprintf(file, "%s", textToWrite); 
    fclose(file); 
    // Reading text from a file 
    file = fopen("example.txt", "r"); 
    if (file == NULL) { 
        perror("Error opening file for reading"); 
        return 2; 
    } 
    fgets(buffer, sizeof(buffer), file); 
    fclose(file); 
    // Print the read text 
    printf("Read from file: %s\n", buffer); 
    return 0; 
} 
