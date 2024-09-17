#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 80

int count_occurrences(char *string, char *target) {
    int count = 0;
    char *ptr = string;

    while ((ptr = strstr(ptr, target)) != NULL) {
        count++;
        ptr += strlen(target);
    }

    return count;
}

int main() {
    char string[MAX_LENGTH];
    char target[MAX_LENGTH];

    fgets(string, MAX_LENGTH, stdin);
    fgets(target, MAX_LENGTH, stdin);

    target[strcspn(target, "\n")] = '\0';

    int occurrences = count_occurrences(string, target);
    printf("%s %d\n", target, occurrences);

    return 0;
}
