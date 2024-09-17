#include <stdio.h>

int main() {
  float a, b, c, d, e, f, x, y;

  // Nhập hệ số
  printf("Nhập hệ số a: ");
  scanf("%f", &a);
  printf("Nhập hệ số b: ");
  scanf("%f", &b);
  printf("Nhập hệ số c: ");
  scanf("%f", &c);
  printf("Nhập hệ số d: ");
  scanf("%f", &d);
  printf("Nhập hệ số e: ");
  scanf("%f", &e);
  printf("Nhập hệ số f: ");
  scanf("%f", &f);

  // Kiểm tra điều kiện
  if (a * e - b * d == 0) {
    // Hệ vô nghiệm hoặc vô số nghiệm
    if (c * e - b * f == 0 && a * f - c * d == 0) {
      printf("Hệ vô số nghiệm.\n");
    } else {
      printf("Hệ vô nghiệm.\n");
    }
  } else {
    // Giải hệ phương trình
    x = (c * e - b * f) / (a * e - b * d);
    y = (a * f - c * d) / (a * e - b * d);

    // Hiển thị nghiệm
    printf("Nghiệm x = %.2f\n", x);
    printf("Nghiệm y = %.2f\n", y);
  }

  return 0;
}
