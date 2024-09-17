#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE_LENGTH 80
#define MAX_ENTRIES 100

typedef struct {
   int SoBaoDanh;
   char HoTen[31];
   char Khoa[5];
   float DiemThi;
} ThiSinh;

typedef struct {
   char TenHang[31];
   int SoLuong;
   float DonGia;
} HangHoa;

void bai1();
void bai2();
void bai3a();
void bai3b();
void bai4();
void bai5();
void bai6();
void bai7();
void bai8a();
void bai8b();
void bai9();
void bai10();
void bai11();
void bai12a();
void bai12b();
void bai13a();
void bai13b();
void bai14();
void bai15();

int main() {
   int choice;
   while (1) {
       printf("Chon bai thuc hanh (1-15, 0 de thoat): ");
       scanf("%d", &choice);
       switch (choice) {
           case 1:
               bai1();
               break;
           case 2:
               bai2();
               break;
           case 3:
               bai3a();
               bai3b();
               break;
           case 4:
               bai4();
               break;
           case 5:
               bai5();
               break;
           case 6:
               bai6();
               break;
           case 7:
               bai7();
               break;
           case 8:
               bai8a();
               bai8b();
               break;
           case 9:
               bai9();
               break;
           case 10:
               bai10();
               break;
           case 11:
               bai11();
               break;
           case 12:
               bai12a();
               bai12b();
               break;
           case 13:
               bai13a();
               bai13b();
               break;
           case 14:
               bai14();
               break;
           case 15:
               bai15();
               break;
           case 0:
               return 0;
           default:
               printf("Khong co bai thuc hanh nay!\n");
               break;
       }
   }
   return 0;
}

void bai1() {
   FILE *out;
   out = fopen("hello.txt", "w");
   if (out == NULL) {
       perror("Khong the mo tep de ghi.\n");
       return;
   }
   fprintf(out, "Hello world");
   fclose(out);
}

void bai2() {
   int dem = 0;
   char s[80];
   FILE *f = fopen("vanban.txt", "r");
   if (f == NULL) {
       perror("Loi mo tep vanban.txt\n");
       return;
   }
   while (!feof(f))
       dem += fscanf(f, "%s", s);
   fclose(f);
   printf("Tong so tu: %d\n", dem);
}

void bai3a() {
   FILE *input, *output;
   input = fopen("vanban.txt", "r");
   output = fopen("vanban2.txt", "w+");
   char ch;
   ch = fgetc(input);
   while (ch != EOF) {
       fputc(toupper(ch), output);
       ch = fgetc(input);
   }
   fclose(input);
   fclose(output);
}

void bai3b() {
   FILE *f = fopen("vanban.txt", "r");
   if (f == NULL) {
       perror("Loi mo tep vanban.txt\n");
       return;
   }
   int lower_count = 0, upper_count = 0, digit_count = 0, space_count = 0;
   char ch;
   while ((ch = fgetc(f)) != EOF) {
       if (isalpha(ch)) {
           if (islower(ch))
               lower_count++;
           else
               upper_count++;
       } else if (isdigit(ch)) {
           digit_count++;
       } else if (isspace(ch)) {
           space_count++;
       }
   }
   fclose(f);
   printf("So ky tu chu thuong: %d\n", lower_count);
   printf("So ky tu chu hoa: %d\n", upper_count);
   printf("So ky tu so: %d\n", digit_count);
   printf("So ky tu khoang trang: %d\n", space_count);
}

void bai4() {
   FILE *fp;
   char line[MAX_LINE_LENGTH];
   int count = 0;
   fp = fopen("input.txt", "r");
   while (fgets(line, MAX_LINE_LENGTH, fp) != NULL)
       count++;
   printf("File contains %d lines.\n", count);
   fclose(fp);
}

void bai5() {
   FILE *f;
   float dToan, dLy, dHoa;
   printf("Nhap diem thi Toan, Ly Hoa: ");
   scanf("%f%f%f", &dToan, &dLy, &dHoa);
   f = fopen("my_score.txt", "w");
   fprintf(f, "%f\n%f\n%f\n", dToan, dLy, dHoa);
   fclose(f);
   f = fopen("my_score.txt", "r");
   fscanf(f, "%f%f%f", &dToan, &dLy, &dHoa);
   fclose(f);
   float dTb = (dToan + dLy + dHoa) / 3;
   printf("Diem trung binh: %f\n", dTb);
}

void bai6() {
   FILE *fp;
   int c[3] = {3, 4, 5};
   fp = fopen("file_nhi_phan.dat", "wb");
   fwrite(c, sizeof(int), 3, fp);
   fclose(fp);
}

void bai7() {
   FILE *fp;
   int buffer[3];
   fp = fopen("file_nhi_phan.dat", "rb");
   fread(buffer, sizeof(int), 3, fp);
   for (int i = 0; i < 3; i++) {
       printf("\nPhan tu thu %d : %d", i, buffer[i]);
   }
   fclose(fp);
}

void bai8a() {
   FILE *fp;
   fp = fopen("fb2.dat", "wb");
   if (fp == NULL) {
       perror("Khong mo duoc file\n");
       return;
   }
   for (int i = 0; i < 100; i++) {
       int n = rand() % 100 + 1;
       fwrite(&n, sizeof(int), 1, fp);
   }
   fclose(fp);
}

void bai8b() {
   FILE *fp;
   int buffer[100];
   fp = fopen("fb2.dat", "rb");
   fseek(fp, 0, SEEK_END);
   int filesize = ftell(fp);
   printf("Kich thuoc file: %d\n", filesize);
   int so_phan_tu = filesize / sizeof(int);
   printf("So phan tu trong file: %d\n", so_phan_tu);
   fseek(fp, 0, SEEK_SET);
   fread(buffer, sizeof(int), so_phan_tu, fp);
   for (int i = 0; i < 4; i++) {
       printf("\n Phan tu thu %d: %d", i, buffer[i]);
    }
    fclose(fp);
}

void bai9() {
    FILE *fp;
    int buffer[100];
    int index;
    fp = fopen("fb2.dat", "rb");
    if (fp == NULL) {
        perror("Khong mo duoc file\n");
        return;
    }
    printf("Nhap vi tri phan tu can doc: ");
    scanf("%d", &index);
    fseek(fp, index * sizeof(int), SEEK_SET);
    fread(&buffer[0], sizeof(int), 1, fp);
    printf("Phan tu tai vi tri %d: %d\n", index, buffer[0]);
    fclose(fp);
}

void bai10() {
    FILE *fp;
    fp = fopen("fb2.dat", "ab");
    if (fp == NULL) {
        perror("Khong mo duoc file\n");
        return;
    }
    int n = 6;
    fwrite(&n, sizeof(int), 1, fp);
    fclose(fp);
}

void bai11() {
    FILE *fp;
    int n, index;
    fp = fopen("fb2.dat", "r+b");
    if (fp == NULL) {
        perror("Khong mo duoc file\n");
        return;
    }
    printf("Nhap vi tri phan tu can chinh sua: ");
    scanf("%d", &index);
    printf("Nhap gia tri moi: ");
    scanf("%d", &n);
    fseek(fp, index * sizeof(int), SEEK_SET);
    fwrite(&n, sizeof(int), 1, fp);
    fclose(fp);
}

void bai12a() {
    FILE *fp;
    fp = fopen("Songuyen.dat", "wb");
    if (fp == NULL) {
        perror("Khong mo duoc file\n");
        return;
    }
    int n = 1;
    for (int i = 0; i < 100; i++) {
        fwrite(&n, sizeof(int), 1, fp);
        n += 2;
    }
    fclose(fp);
}

void bai12b() {
    FILE *fp;
    int buffer;
    fp = fopen("Songuyen.dat", "rb");
    if (fp == NULL) {
        perror("Khong mo duoc file\n");
        return;
    }
    fseek(fp, (50 - 1) * sizeof(int), SEEK_SET);
    for (int i = 50; i <= 100; i++) {
        fread(&buffer, sizeof(int), 1, fp);
        printf("%d ", buffer);
    }
    fclose(fp);
}
void bai13a() {
    ThiSinh DSDT[100];
    FILE *f;
    int i = 0;
    f = fopen("ThiSinh.dat", "wb");
    if (f == NULL) {
        perror("Khong mo duoc file\n");
        return;
    }
    printf("Nhap thong tin thi sinh (Nhan *** de ket thuc):\n");
    do {
        printf("Ho ten: ");
        scanf(" %[^\n]", DSDT[i].HoTen);
        if (strcmp(DSDT[i].HoTen, "***") == 0) break;
        printf("So bao danh: ");
        scanf("%d", &DSDT[i].SoBaoDanh);
        printf("Khoa: ");
        scanf("%s", DSDT[i].Khoa);
        printf("Diem thi: ");
        scanf("%f", &DSDT[i].DiemThi);
        fwrite(&DSDT[i], sizeof(ThiSinh), 1, f);
        i++;
    } while (1);
    fclose(f);
}
void bai13b() {
    ThiSinh DSDT[100], temp;
    FILE *f, *fout;
    int i, j, n;
    f = fopen("ThiSinh.dat", "rb");
    if (f == NULL) {
        perror("Khong mo duoc file\n");
        return;
    }
    fseek(f, 0, SEEK_END);
    n = ftell(f) / sizeof(ThiSinh);
    fseek(f, 0, SEEK_SET);
    fread(DSDT, sizeof(ThiSinh), n, f);
    fclose(f);

    // Sap xep danh sach theo diem giam dan
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (DSDT[i].DiemThi < DSDT[j].DiemThi) {
                temp = DSDT[i];
                DSDT[i] = DSDT[j];
                DSDT[j] = temp;
            }

    // In danh sach ra man hinh
    printf("STT So Bao Danh Ho Ten Diem Thi\n");
    for (i = 0; i < n; i++)
        printf("%3d %10d %20s %5.2f\n", i + 1, DSDT[i].SoBaoDanh, DSDT[i].HoTen, DSDT[i].DiemThi);

    // Luu danh sach da sap xep vao file nhi phan
    fout = fopen("CNTT_sapxeptheodiemthi.dat", "wb");
    if (fout == NULL) {
        perror("Khong mo duoc file\n");
        return;
    }
    fwrite(DSDT, sizeof(ThiSinh), n, fout);
    fclose(fout);

    // Luu danh sach da sap xep vao file van ban
    fout = fopen("CNTT_sapxeptheodiemthi.txt", "w");
    if (fout == NULL) {
        perror("Khong mo duoc file\n");
        return;
    }
    for (i = 0; i < n; i++)
        fprintf(fout, "%10d %20s %5.2f\n", DSDT[i].SoBaoDanh, DSDT[i].HoTen, DSDT[i].DiemThi);
    fclose(fout);
}
void bai14() {
    HangHoa HH[100];
    FILE *f;
    int i = 0, soluong;
    float tongtien = 0;
    f = fopen("HangHoa.dat", "wb");
    if (f == NULL) {
        perror("Khong mo duoc file\n");
        return;
    }
    printf("Nhap thong tin hang hoa (Nhan *** de ket thuc):\n");
    do {
        printf("Ten hang: ");
        scanf(" %[^\n]", HH[i].TenHang);
        if (strcmp(HH[i].TenHang, "***") == 0) break;
        printf("So luong: ");
        scanf("%d", &HH[i].SoLuong);
        printf("Don gia: ");
        scanf("%f", &HH[i].DonGia);
        fwrite(&HH[i], sizeof(HangHoa), 1, f);
        i++;
    } while (1);
    fclose(f);

    f = fopen("HangHoa.dat", "rb");
    if (f == NULL) {
        perror("Khong mo duoc file\n");
        return;
    }
    printf("STT Ten Hang So Luong Don Gia Thanh Tien\n");
    i = 0;
    while (fread(&HH[i], sizeof(HangHoa), 1, f) == 1) {
        printf("%3d %-20s %8d %10.2f %10.2f\n", i + 1, HH[i].TenHang, HH[i].SoLuong, HH[i].DonGia,
               HH[i].SoLuong * HH[i].DonGia);
        tongtien += HH[i].SoLuong * HH[i].DonGia;
        i++;
    }
    printf("\nTong so hang: %d\nTong so tien: %.2f\n", i, tongtien);
    fclose(f);

    printf("\nNhap so luong can tim: ");
    scanf("%d", &soluong);
    f = fopen("HangHoa.dat", "rb");
    if (f == NULL) {
        perror("Khong mo duoc file\n");
        return;
    }
    i = 0;
    int found = 0;
    while (fread(&HH[i], sizeof(HangHoa), 1, f) == 1) {
        if (HH[i].SoLuong == soluong) {
            printf("%-20s %8d %10.2f\n", HH[i].TenHang, HH[i].SoLuong, HH[i].DonGia);
            found = 1;
        }
        i++;
    }
    if (!found) printf("Khong tim thay hang hoa nao co so luong %d\n", soluong);
    fclose(f);
}

#include <string.h>

#define MAX_LINE_LENGTH 1000

void bai15() {
    char filename[100];
    printf("Nhap ten file: ");
    scanf("%s", filename);

    FILE *fin, *fout;
    fin = fopen(filename, "r");
    if (fin == NULL) {
        perror("Khong mo duoc file\n");
        return;
    }

    fout = fopen("output.c", "w");
    if (fout == NULL) {
        perror("Khong mo duoc file\n");
        fclose(fin);
        return;
    }

    char line[MAX_LINE_LENGTH];
    int inComment = 0; // Biến đánh dấu nếu đang trong chú thích

    while (fgets(line, MAX_LINE_LENGTH, fin)) {
        // Xử lý chú thích dòng đơn
        if (strncmp(line, "//", 2) == 0) {
            continue; // Bỏ qua dòng này
        }

        // Xử lý chú thích kiểu khối
        if (strstr(line, "/*") != NULL) {
            inComment = 1;
        }

        if (!inComment) {
            fputs(line, fout); // Ghi dòng vào tệp đầu ra
        }

        if (strstr(line, "*/") != NULL) {
            inComment = 0;
        }
    }

    fclose(fin);
    fclose(fout);
    printf("Da loai bo chu thich va luu ket qua vao file 'output.c'\n");
}
