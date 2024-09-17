#include <stdio.h>
#include <string.h>

// Hàm giải mã thông điệp
void giaiMa(char *thongDiep, char *khoa, char *ma) {
    int i;
    int len = strlen(thongDiep);

    for (i = 0; i < len; i++) {
        if (thongDiep[i] >= 'a' && thongDiep[i] <= 'z') {
            for (int j = 0; j < strlen(ma); j++){
                if (thongDiep[i] == ma[j]) {
                    thongDiep[i] = khoa[j];
                    break;
                }
            }
        }
    }
}

int main() {
    char thongDiep[101]; // Thông điệp đã bị mã hóa
    char khoa[27]; // Xâu khóa
    char ma[27]; // Xâu mã
    char ketQua[101]; // Thông điệp sau khi giải mã

    fgets(thongDiep, sizeof(thongDiep), stdin);
    thongDiep[strcspn(thongDiep, "\n")] = '\0';

    scanf("%s", khoa);

    scanf("%s", ma);

    // Giải mã thông điệp
    giaiMa(thongDiep, khoa, ma);

    // In thông điệp sau khi giải mã
    printf("%s\n", thongDiep);

    return 0;
}
