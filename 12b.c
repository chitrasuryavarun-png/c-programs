#include <stdio.h> 
int main() { 
    FILE *sourceFile, *destinationFile; 
    char buffer[1024];  // Buffer to store data 
    // Open the source file for reading in binary mode 
    sourceFile = fopen("source.txt", "rb"); 
    if (sourceFile == NULL) { 
        perror("Error opening source file"); 
        return 1; 
    } 
    // Open the destination file for writing in binary mode 
    destinationFile = fopen("destination.txt", "wb"); 
    if (destinationFile == NULL) { 
        perror("Error opening destination file"); 
        fclose(sourceFile); 
        return 2; 
    } 
    // Copy the contents of the source file to the destination file 
    size_t bytesRead; 
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), sourceFile)) > 0) { 
        fwrite(buffer, 1, bytesRead, destinationFile); 
    } 
    fclose(sourceFile); 
    fclose(destinationFile); 
    return 0; 
} 
