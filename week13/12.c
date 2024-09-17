#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 81

int countWords(char str[]) {
    int count = 0;
    int inWord = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (isspace(str[i])) {
            inWord = 0;
        } else {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        }
    }

    return count;
}

int main() {
    char str[MAX_LENGTH];

    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    int totalWords = countWords(str);
    printf("%d\n", totalWords);

    return 0;
}
