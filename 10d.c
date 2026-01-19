#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
    int size; 
    printf("Enter size of the array: "); 
    scanf("%d", &size); 
    // Allocating memory dynamically using malloc 
    int *array = (int *)malloc(size * sizeof(int)); 
    // Reading values and finding out the sum 
    int sum = 0, i; 
    printf("Enter %d array elements: ", size); 
    for (i = 0; i < size; i++) 
    { 
        scanf("%d", array + i); // same as writing &arr[i]; 
        sum = sum + *(array + i); // same as writing arr[i]; 
    } 
    printf("Sum is: %d", sum); 
    return 0; 
} 
