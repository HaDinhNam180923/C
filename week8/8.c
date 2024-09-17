#include <stdio.h>

int main() {
    int diem, tong_diem = 0, so_mon = 0;

    while (1) {
        scanf("%d", &diem);

        if (diem < 0)
            break;

        tong_diem += diem;
        so_mon++;
    }

    if (so_mon == 0) {
    } else {
        float diem_trung_binh = (float)tong_diem / so_mon;
        printf("%.2f\n", diem_trung_binh);
    }

    return 0;
}
