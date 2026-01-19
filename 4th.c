#include <stdio.h>
 int main()
{
char ch;
char s[1000];
 char sen[10000];
scanf("%c", &ch);
scanf("%s\n", s);
scanf("%[^\n]%*c", sen);
 printf("%c\n%s\n%s", ch, s, sen);
  return 0;
}

