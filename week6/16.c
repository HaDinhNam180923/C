#include <stdio.h>

int main() {
  int so_ve_1, so_ve_2, so_ve_3, so_ve_4, so_ve_5, so_ve_6;
  int la_ngay_le, mua_khu_hoi;
  float tong_tien = 0;

  scanf("%d", &so_ve_1);
  scanf("%d", &so_ve_2);
  scanf("%d", &so_ve_3);
  scanf("%d", &so_ve_4);
  scanf("%d", &so_ve_5);
  scanf("%d", &so_ve_6);

  scanf("%d", &la_ngay_le);
  scanf("%d", &mua_khu_hoi);

  tong_tien += so_ve_1 * 895000;
  tong_tien += so_ve_2 * 1111000;
  tong_tien += so_ve_3 * 1279000;
  tong_tien += so_ve_4 * 1417000;
  tong_tien += so_ve_5 * 1452000;
  tong_tien += so_ve_6 * 1566000;

  if (la_ngay_le) {
    tong_tien *= 1.15;
  }

  if (mua_khu_hoi) {
    tong_tien *= 0.9;
  }

  printf("%.0f\n", tong_tien);

  return 0;
}
