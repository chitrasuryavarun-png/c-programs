#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);   // simple for exam use

    /* 1. Lowercase to Uppercase */
    printf("\nLowercase to Uppercase: ");
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            printf("%c", str[i] - 32);
        else
            printf("%c", str[i]);
    }

    /* 2. Uppercase to Lowercase */
    printf("\nUppercase to Lowercase: ");
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            printf("%c", str[i] + 32);
        else
            printf("%c", str[i]);
    }

    /* 3. Toggle Case */
    printf("\nToggle Case: ");
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            printf("%c", str[i] - 32);
        else if (str[i] >= 'A' && str[i] <= 'Z')
            printf("%c", str[i] + 32);
        else
            printf("%c", str[i]);
    }

    /* 4. Sentential Case */
    printf("\nSentential Case: ");
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;

    for (i = 0; str[i] != '\0'; i++)
        printf("%c", str[i]);

    return 0;
}
