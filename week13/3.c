#include <stdio.h>
#include <string.h>

void replace(char str[], char replace_what, char replace_with) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == replace_what) {
            str[i] = replace_with;
        }
    }
}

int main() {
    char str[81];
    char replace_what, replace_with;
    fgets(str, 81, stdin);
    str[strcspn(str, "\n")] = '\0';
    scanf(" %c", &replace_what);
    scanf(" %c", &replace_with);
    replace(str, replace_what, replace_with);
    printf("%s\n", str);
    return 0;
}
