#include <stdio.h>
#include <string.h>

#define SIZE 3   // define size of the array

// Function to display array
void display(char array[][30])
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("%s ", array[i]);
    }
    printf("\n");
}

int main()
{
    char array[SIZE][30];
    char temp[30];
    int i, j;

    // Input strings
    printf("Enter %d strings:\n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        scanf("%s", array[i]);
    }

    // Display original array
    printf("Original Array: ");
    display(array);

    // Bubble sort for strings
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE - 1 - i; j++)
        {
            if (strcmp(array[j], array[j + 1]) > 0)
            {
                strcpy(temp, array[j]);
                strcpy(array[j], array[j + 1]);
                strcpy(array[j + 1], temp);
            }
        }
    }

    // Display sorted array
    printf("Sorted Array: ");
    display(array);

    return 0;
}

