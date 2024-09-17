#include <stdio.h>

int main() {
    char ch;

    printf("Nhap mot ki tu: ");
    scanf(" %c", &ch);


    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        int position;
        if (ch >= 'a' && ch <= 'z') {
            position = ch - 'a' + 1;
        } else {
            position = ch - 'A' + 1;
        }
        printf("Vi tri cua ki tu '%c' trong bang chu cai la %d.\n", ch, position);
    } else {
        printf("Khong phai chu cai.\n");
    }

    return 0;
}
