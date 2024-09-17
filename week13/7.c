#include <stdio.h>
#include <string.h>

void extractSubstring(char *source, int position, int length, char *result);

int main() {
    char str[100];
    int i, j = 0;
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("%s\n", str);
}

void extractSubstring(char *source, int position, int length, char *result) {
    strncpy(result, source + position, length);
    result[length] = '\0'; // Thêm ký tự null để kết thúc chuỗi
}
