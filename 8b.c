#include <stdio.h>

int main()
{
    char str[100];
    int i;
    int lower = 0, upper = 0, vowels = 0, consonants = 0, digits = 0;

    printf("Enter a string: ");
    gets(str);   // for exam purpose (simple)

    for (i = 0; str[i] != '\0'; i++)
    {
        // Check digits
        if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        // Check uppercase letters
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            upper++;
            if (str[i]=='A' || str[i]=='E' || str[i]=='I' ||
                str[i]=='O' || str[i]=='U')
                vowels++;
            else
                consonants++;
        }
        // Check lowercase letters
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            lower++;
            if (str[i]=='a' || str[i]=='e' || str[i]=='i' ||
                str[i]=='o' || str[i]=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("\nLowercase letters = %d", lower);
    printf("\nUppercase letters = %d", upper);
    printf("\nVowels = %d", vowels);
    printf("\nConsonants = %d", consonants);
    printf("\nDigits = %d", digits);

    return 0;
}

