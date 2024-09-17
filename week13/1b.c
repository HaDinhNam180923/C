#include <stdio.h>
#include <string.h>

int main() {
    char str1[81];
    char str2[81];

    fgets(str1, sizeof(str1), stdin);
    if (str1[strlen(str1) - 1] == '\n') {
        str1[strlen(str1) - 1] = '\0';
    }

    fgets(str2, sizeof(str2), stdin);
    if (str2[strlen(str2) - 1] == '\n') {
        str2[strlen(str2) - 1] = '\0';
    }

    int totalLength = strlen(str1) + strlen(str2);
    printf("%d\n", totalLength);

    return 0;
}
