#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], str3[100];
    int length;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    /* 1. String Length */
    length = strlen(str1);
    printf("\nLength of first string = %d", length);

    /* 2. String Concatenation */
    strcpy(str3, str1);
    strcat(str3, str2);
    printf("\nConcatenated string = %s", str3);

    /* 3. String Reverse */
    strrev(str1);
    printf("\nReversed first string = %s", str1);

    return 0;
}
