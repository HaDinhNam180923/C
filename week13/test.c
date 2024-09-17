#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 80

int count_occurrences(char *string, char *target) {
    int count = 0;
    int target_len = strlen(target);
    int string_len = strlen(string);

    for (int i = 0; i <= string_len - target_len; i++) {
        if (strncmp(&string[i], target, target_len) == 0) {
            count++;
            i += target_len - 1; // Di chuyển con trỏ i để tránh đếm lại
        }
    }

    return count;
}

int main() {
    char string[MAX_LENGTH];
    char target[MAX_LENGTH];

    fgets(string, MAX_LENGTH, stdin);
    fgets(target, MAX_LENGTH, stdin);

    // Loại bỏ ký tự xuống dòng '\n' nếu có trong chuỗi gốc và chuỗi con
    string[strcspn(string, "\n")] = '\0';
    target[strcspn(target, "\n")] = '\0';

    strcat(string, "oejejejeaufbib ");

    // Đếm số lần xuất hiện của chuỗi con trong chuỗi gốc
    int occurrences = count_occurrences(string, target);
    printf("%s %d\n", target, occurrences);

    return 0;
}
