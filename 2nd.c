#include<stdio.h>
int main()
{
	int a;
	float b;
	char ch;
	char str[101];
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter a floating point value:");
	scanf("%f\n",&b);
	printf("Enter a character:");
	scanf("%c",&ch);
	printf("enter a string:");
	scanf("%s",str);
	printf("%d\n%f\n\n%c\n%s",a,b,ch,str);
	return 0;
}
