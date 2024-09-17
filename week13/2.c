#include <stdio.h>
#include <string.h>

int spacecounter(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    fgets(str, 100, stdin);
    int spaces = spacecounter(str);
    printf("%d\n", spaces);
    return 0;
}
