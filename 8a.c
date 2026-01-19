#include <stdio.h>

int main()
{
    char str[1001];
    int i;   // ? declare here (C89 compatible)

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    printf("\nWords in the sentence are:\n");

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            printf("\n");
        else
            printf("%c", str[i]);
    }

    return 0;
}


