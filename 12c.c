#include <stdio.h> 
int main() { 
    FILE *sourceFile, *destinationFile; 
    char ch; 
    // Open the source file for reading 
    sourceFile = fopen("input.txt", "r"); 
    if (sourceFile == NULL) { 
        perror("Error opening source file"); 
        return 1; 
    } 
    // Open the destination file for writing 
    destinationFile = fopen("output.txt", "w"); 
    if (destinationFile == NULL) { 
        perror("Error opening destination file"); 
        fclose(sourceFile); 
        return 2; 
    } 
    // Copy contents from source to destination 
    while ((ch = fgetc(sourceFile)) != EOF) { 
        fputc(ch, destinationFile); 
    } 
    // Close the files 
    fclose(sourceFile); 
    fclose(destinationFile); 
    printf("File copied successfully.\n"); 
    return 0; 
} 
