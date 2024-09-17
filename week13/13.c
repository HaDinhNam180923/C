#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 81

int main() {
    char str[MAX_LENGTH];
    int freq[256] = {0};  // Mảng lưu tần suất xuất hiện của các ký tự
    int maxCount = 0;
    char maxChar;

    // Đọc xâu ký tự từ đầu vào
    fgets(str, sizeof(str), stdin);

    // Kiểm tra và bỏ ký tự newline ở cuối xâu nếu có
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Tính tần suất xuất hiện của các ký tự, bỏ qua khoảng trống
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ') {
            freq[(unsigned char)str[i]]++;
            if (freq[(unsigned char)str[i]] > maxCount) {
                maxCount = freq[(unsigned char)str[i]];
                maxChar = str[i];
            }
        }
    }

    // In kết quả
    printf("%c %d\n", maxChar, maxCount);

    return 0;
}
