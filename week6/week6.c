#include <stdio.h>
#include <stdlib.h>

int menu();
void bth1();
void bth2();
void bth3();
void bth4();
void bth5();
void bth6();
void bth7();
void bth8();
void bth9();
void bth10();
void bth11();
void bth12();
void bth13();
void bth14();
void bth15();
void bth16();
void bth17();

int main() {
    int tuy_chon = 0;
    tuy_chon = menu();
    switch(tuy_chon) {
        case 1: bth1(); break;
        case 2: bth2(); break;
        case 3: bth3(); break;
        case 4: bth4(); break;
        case 5: bth5(); break;
        case 6: bth6(); break;
        case 7: bth7(); break;
        case 8: bth8a(); break;
        case 9: bth9(); break;
        case 10: bth10(); break;
        case 11: bth11(); break;
        case 12: bth12(); break;
        case 13: bth13(); break;
        case 14: bth14(); break;
        case 15: bth15(); break;
        case 16: bth16(); break;
        case 17: bth8b(); break;
    }
    return 0;
}

int menu() {
    int tuy_chon = 0;
    printf("\n1. Bai thuc hanh 1");
    printf("\n2. Bai thuc hanh 2");
    printf("\n3. Bai thuc hanh 3");
    printf("\n4. Bai thuc hanh 4");
    printf("\n5. Bai thuc hanh 5");
    printf("\n6. Bai thuc hanh 6");
    printf("\n7. Bai thuc hanh 7");
    printf("\n8. Bai thuc hanh 8a");
    printf("\n9. Bai thuc hanh 9");
    printf("\n10. Bai thuc hanh 10");
    printf("\n11. Bai thuc hanh 11");
    printf("\n12. Bai thuc hanh 12");
    printf("\n13. Bai thuc hanh 13");
    printf("\n14. Bai thuc hanh 14");
    printf("\n15. Bai thuc hanh 15");
    printf("\n16. Bai thuc hanh 16");
    printf("\n17. Bai thuc hanh 8b");
    printf("\n------------------");
    printf("\nNhap tuy chon: ");
    scanf("%d", &tuy_chon);
    system("cls");
    return tuy_chon;
}

void bth1() {
    char a, b, c, i;
    scanf("\n%c\n%c\n%c", &a, &b, &c);
    if(a > b) i = b;
    else i = a;

    if (i > c) printf("%c", c);
        else printf("%c", i);
}

void bth2() {
    int a;
    scanf("%d", &a);
    if (a < 18) printf("TRE EM");
    if (a >= 18 && a < 65) printf("TRUONG THANH");
    if (a >= 65) printf("NGUOI GIA");
}

void bth3() {
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
}

void bth4() {
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
}

void bth5() {
    int a, b, c, i;
    scanf("%d\n%d\n%d", &a, &b, &c);
    if(a > b) i = b;
    else i = a;

    if (i > c) printf("%d", c);
        else printf("%d", i);
}

void bth6() {
    float a, b, c;
    char d;
    scanf("%c\n%f", &d, &a);
    if (d == 'C') {b = 0.70; c = 2.50;}
    if (d == 'B') {b = 1.50; c = 2.00;}
    if (d == 'T') {b = 2.50; c = 3.25;}
    if (a > 2) printf("%.2f", (2*b) + (((a-2)*c)));
        else printf("%.2f", a*b);
}

void bth7() {
    int c;
    scanf("%d", &c);
    switch (c) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: printf("31"); break;
    case 4: case 6: case 9: case 11:  printf("30"); break;
    case 2:  printf("28-29"); break;
    default: printf("hehe\n"); break;
    }
}

void bth8a() {
    float  diem ;
	scanf("%f", &diem );
	if( diem <5)printf("Kem");
	else if( diem >=5&& diem <7)printf("Trung binh");
	else if( diem >=7&& diem <9)printf("Kha");
	else if( diem >=9&& diem <=10)printf("Gioi");
}

void bth9() {
    int a=1;
    scanf("%d", &a);
    switch ( a ) {
    case 1:
    printf("a=1\n");
    case 2:
    printf("a=2\n");
    break;
    case 3:
    printf("a=3\n");
    }
}

void bth10() {
     float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float delta = b * b - 4 * a * c;
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("VO SO NGHIEM\n");
            } else {
                printf("VO NGHIEM\n");
            }
        } else {
            printf("%.2f\n", -c / b);
        }
    } else {
        if (delta < 0) {
            float realPart = -b / (2 * a);
            float imaginaryPart = sqrt(-delta) / (2 * a);
            printf("%.2f + j%.2f\n", realPart, imaginaryPart);
            printf("%.2f - j%.2f\n", realPart, imaginaryPart);
        } else if (delta == 0) {
            printf("%.2f\n", -b / (2 * a));
        } else {
            float x1 = (-b - sqrt(delta)) / (2 * a);
            float x2 = (-b + sqrt(delta)) / (2 * a);
            printf("%.2f\n%.2f\n", (x1 < x2) ? x1 : x2, (x1 < x2) ? x2 : x1);
        }
    }

}

void bth11() {
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

}

void bth12() {
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
}

void bth13() {
    int a;
    scanf("%d", &a);
    if (a>=0 && a<=50) printf("%.0f", 1.08*a*1678);
    if (a>=51 && a<=100) printf("%.0f", 1.08*(50*1678+(a-50)*1734));
    if (a>=101 && a<=200) printf("%.0f", 1.08*(50*1678+(50)*1734+2014*(a-100)));
    if (a>=201 && a<=300) printf("%.0f", 1.08*(50*1678+(50)*1734+2014*100+(a-200)*2536));
    if (a>=301 && a<=400) printf("%.0f", 1.08*(50*1678+(50)*1734+2014*100+100*2536+(a-300)*2834));
    if (a>=401) printf("%.0f", 1.08*(50*1678+(50)*1734+2014*100+100*2536+100*2834+(a-400)*2927));
    printf("\n%10s%10s%10s%10s%10s%10s%10s%20s%10s%20s\n", "BO CS", "CS MOI", "CS CU", "HS NHAN", "DN TTHU", "DN TTIEP", "DN TPHU", "DN TTE", "DON GIA", "THANH TIEN");
    printf("%10s%10s%10s%10s%10s%10s%10s%20s\n", "KT ", "945", "792", "1  ", "153 ", "0  ", "0  ", "153");
    printf("%70s%20s%10s%20d\n", " ", "50", "1.678", 50*1678);
    printf("%70s%20s%10s%20d\n", " ", "50", "1.734", 50*1734);
    printf("%70s%20s%10s%20d\n", " ", "53", "2.014", 53*2014);
    printf("%-70s%20s%10s%20d\n", " Cong", "153", " ", 53*2014+50*1734+50*1678);
    printf("%-70s%-30s%20.0f\n", " Thue suat GTGT: 8%", "Thue GTGT: ", 0.8*(53*2014+50*1734+50*1678));
    printf("%-100s%20.0f\n", " Tong cong tien thanh toan:", 1.08*(53*2014+50*1734+50*1678));
}

void bth14() {
    int a;

    scanf("%d", &a);

    if (a>=0 && a<=10) printf("%d", 1.15*a*5973-1);

    if (a>=11 && a<=20) printf("%.0f", 1.15* (10*5973+(a-10)*7052));

    if (a>=21 && a<=30) printf("%.0f", 1.15*(10*5973+10*7052+8669*(a-20))-1);
    if (a>=31) printf("%.0f", 1.15* (10*5973+10*7052+8669*10+(a-30)*15929));

}

void bth15() {
    char a;
    int n, i;
    scanf("%c\n%d\n%d", &a, &n, &i);
    if (a == 'L') {
        if (n == 1 && i == 0) printf("%d", 109000);
        if (n == 2 && i == 0) printf("%d", 89000);
        if (n == 1 && i == 1) printf("%d", 109000-13000);
        if (n == 2 && i == 1) printf("%d", 89000-13000);
    }
    if (a == 'N') {
        if (n == 1 && i == 0) printf("%d", 109000*75/100);
        if (n == 2 && i == 0) printf("%d", 89000*75/100);
        if (n == 1 && i == 1) printf("%d", 109000*75/100-13000);
        if (n == 2 && i == 1) printf("%d", 89000*75/100-13000);
    }
    if (a == 'S') {
        if (n == 1 && i == 0) printf("%d", 109000*90/100);
        if (n == 2 && i == 0) printf("%d", 890003*90/100);
        if (n == 1 && i == 1) printf("%d", 109000*90/100-13000);
        if (n == 2 && i == 1) printf("%d", 89000*90/100-13000);
    }
    if (a == 'G') {
        if (n == 1 && i == 0) printf("%d", 109000*85/100);
        if (n == 2 && i == 0) printf("%d", 89000*85/100);
        if (n == 1 && i == 1) printf("%d", 109000*85/100-13000);
        if (n == 2 && i == 1) printf("%d", 89000*85/100-13000);
    }
}

void bth16() {
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

}

void bth8b() {
    float  diem ;
	scanf("%f", & diem );
	if( diem <4)printf("F");
	else if( diem >=4&& diem <5)printf("D");
	else if( diem >=5&& diem <5.5)printf("D+");
	else if( diem >=5.5&& diem <6.5)printf("C");
	else if( diem >=6.5&& diem <7)printf("C+");
	else if( diem >=7&& diem <8)printf("B");
	else if( diem >=8&& diem <8.5)printf("B+");
	else if( diem >=8.5&& diem <9.5)printf("A");
	else if( diem >= 9.5) printf ("A+");
}
