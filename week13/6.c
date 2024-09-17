
#include <stdio.h>
#include <string.h>
void nameSlice(char []); // Function prototype
void main(void)
{
char name[41];
printf("Enter your first and last names, separated by a space:\n");
gets(name);
nameSlice(name);
printf("Your first name is: %s\n", name);
}
void nameSlice(char userName[])
{
int count = 0;
while (userName[count] != ' ' && userName[count] != '\0')
count++;
if (userName[count] == ' ')
userName[count] = '\0';
}
