#include <stdio.h>
#include <math.h>

int main() {
  float x1, y1, x2, y2, x3, y3;
  float a, b, c;


  printf("A: ");
  scanf("%f %f", &x1, &y1);
  printf("B: ");
  scanf("%f %f", &x2, &y2);
  printf("C: ");
  scanf("%f %f", &x3, &y3);


  a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
  b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
  c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));


  if (a + b > c && a + c > b && b + c > a) {
    printf("Hop le.\n");
  } else {
    printf("Khong hop le.\n");
  }

  return 0;
}
