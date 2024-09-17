#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Định nghĩa cấu trúc cho thông tin sinh viên
struct SinhVien {
    int maSo;
    char email[81];
};

// Hàm so sánh hai chuỗi email (dùng cho hàm qsort)
int compareEmail(const void *a, const void *b) {
    return strcmp(((struct SinhVien *)a)->email, ((struct SinhVien *)b)->email);
}

int main() {
    int n;
    scanf("%d", &n);

    // Khởi tạo mảng chứa thông tin sinh viên
    struct SinhVien dsSinhVien[n];

    // Nhập thông tin của n sinh viên
    for (int i = 0; i < n; i++) {
        scanf("%d %s", &dsSinhVien[i].maSo, dsSinhVien[i].email);
    }

    // Sắp xếp danh sách sinh viên theo email
    qsort(dsSinhVien, n, sizeof(struct SinhVien), compareEmail);

    // In danh sách theo thứ tự từ điển tăng dần của email
    for (int i = 0; i < n; i++) {
        printf("%d %s\n", dsSinhVien[i].maSo, dsSinhVien[i].email);
    }

    return 0;
}
