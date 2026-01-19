#include<stdio.h>
int main()
{
	char str[200];
	int i,freq[10] = {0};
	printf("Enter a string:");
	scanf("%[^\n]",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			freq[str[i]-'0']++;
		}
	}
	printf("\nDigit frequency:\n");
	for(i=0;i<10;i++)
	{
		printf("%d=%d\n",i,freq[i]);
	}
	return 0;
}
