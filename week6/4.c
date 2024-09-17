#include <stdio.h>
#include <stdlib.h>

int main() {
  int so_may, so_nguoi_chon, so_lan_choi = 2;

  so_may = rand() % 10 + 1;

  while (so_lan_choi > 0) {
    // Nhập số người chơi đoán
    printf("Nhap so (tu 1 den 10): ");
    scanf("%d", &so_nguoi_chon);

    // So sánh với số máy
    if (so_nguoi_chon == so_may) {
      printf("Chuc mung nhe hehehehe!\n");
      break;
    } else if (so_nguoi_chon < so_may) {
      printf("So ban doan thap\n");
    } else {
      printf("So ban doan cao hon\n");
    }

    so_lan_choi--;

    // Thông báo số lần chơi còn lại
    if (so_lan_choi > 0) {
      printf("Ban con %d lan choi.\n", so_lan_choi);
    }
  }

  // Thông báo thua nếu hết lượt chơi
  if (so_lan_choi == 0) {
    printf("Thua roi hehe. So do la %d.\n", so_may);
  }

  return 0;
}
