#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define STRING_LEN 100

void replace(char str[], char replace_what, char replace_with)
{
	int i;
	for (i = 0; str[i] != '\0'; ++i)
		{
			if (str[i] == replace_what) //so sanh nen dung ==
			str[i] = replace_with; // gan 
		}
}

int main(void)
{
	char str[STRING_LEN + 1];
	char replace_what, replace_with, tmp;
	
	printf("Please enter a string (no spaces)\n");
	scanf("%100s", str);
	
	printf("Letter to replace: ");
	canf(" %c", &replace_what);
	do {tmp=getchar();} while (tmp!='\n');
	
	printf("Letter to replace with: ");
	scanf(" %c", &replace_with);
	replace(str, replace_what, replace_with);
	
	printf("The result: %s\n", str);
	return 0;
}

