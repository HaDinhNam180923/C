#include <stdio.h>

int main() {
  int tuoi;
  scanf("%d", &tuoi);
  switch (tuoi) {
    case 0 ... 17:
      printf("Tre em\n");
      break;
    case 18 ... 64:
      printf("Truong thanh\n");
      break;
    default:
      printf("Nguoi gia\n");
  }

  return 0;
}
