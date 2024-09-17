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
void bth18();

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
        case 8: bth8(); break;
        case 9: bth9(); break;
        case 10: bth10(); break;
        case 11: bth11(); break;
        case 12: bth12(); break;
        case 13: bth13(); break;
        case 14: bth14(); break;
        case 15: bth15(); break;
        case 16: bth16(); break;
        case 17: bth17(); break;
        case 18: bth18(); break;
        default: printf("Lua chon khong hop le\n"); break;
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
    printf("\n8. Bai thuc hanh 8");
    printf("\n9. Bai thuc hanh 9");
    printf("\n10. Bai thuc hanh 10");
    printf("\n11. Bai thuc hanh 11");
    printf("\n12. Bai thuc hanh 12");
    printf("\n13. Bai thuc hanh 13");
    printf("\n14. Bai thuc hanh 14");
    printf("\n15. Bai thuc hanh 15");
    printf("\n16. Bai thuc hanh 16");
    printf("\n17. Bai thuc hanh 17");
    printf("\n18. Bai thuc hanh 18");
    printf("\n------------------");
    printf("\nNhap tuy chon: ");
    scanf("%d", &tuy_chon);
    system("cls");
    return tuy_chon;
}

void bth1() {
    printf("Bai thuc hanh 1\n");
    float fl = 3.14;
    printf("fl's address = %p\n", &fl);
}

void bth2() {
    printf("Bai thuc hanh 2\n");
    int x, y, z;
    int* ptr;
    printf("Enter three integers: ");
    scanf("%d%d%d", &x, &y, &z);
    printf("\nThe three integers are:\n");
    ptr = &x;
    printf("x = %d\n", ptr);
    ptr = &y;
    printf("y = %d\n", ptr);
    ptr = &z;
    printf("z = %d\n", ptr);
}

void bth3() {
    printf("Bai thuc hanh 3\n");
    int x = 25, y = 50, z = 75;
    int *ptr;
    ptr = &x; *ptr += 100;
    ptr = &y; *ptr += 100;
    ptr = &z; *ptr += 100;
    printf("x = %d, y = %d, z = %d\n", x, y, z);
}

void bth4() {
    printf("Bai thuc hanh 4\n");
    void swap(int *px, int *py) {
        int temp = *px;
        *px = *py;
        *py = temp;
    }
    int x = 1, y = 2;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
}

void bth5() {
    printf("Bai thuc hanh 5\n");
    void swap3(int *a, int *b, int *c) {
        int temp = *a;
        *a = *b;
        *b = *c;
        *c = temp;
    }
    int a = 1, b = 2, c = 3;
    printf("Before swap3: a = %d, b = %d, c = %d\n", a, b, c);
    swap3(&a, &b, &c);
    printf("After swap3: a = %d, b = %d, c = %d\n", a, b, c);
}

void bth6() {
    printf("Bai thuc hanh 6\n");
    int x = 1, y = 2, z = 3;
    int *p = &x, *q = &y, *r = &z;
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("p = %p, q = %p, r = %p\n", (void*)p, (void*)q, (void*)r);
    printf("*p = %d, *q = %d, *r = %d\n", *p, *q, *r);
    // Swap values
    int temp = x; x = y; y = z; z = temp;
    printf("After swap values: x = %d, y = %d, z = %d\n", x, y, z);
    // Swap pointers
    int *tempPtr = p; p = q; q = r; r = tempPtr;
    printf("After swap pointers: x = %d, y = %d, z = %d\n", x, y, z);
    printf("p = %p, q = %p, r = %p\n", (void*)p, (void*)q, (void*)r);
    printf("*p = %d, *q = %d, *r = %d\n", *p, *q, *r);
}

void bth7() {
    printf("Bai thuc hanh 7\n");
    void incomeplus(long *current, int year) {
        if (year > 3) *current += 3000000;
    }
    long salary = 5000000;
    int years = 4;
    incomeplus(&salary, years);
    printf("New salary: %ld\n", salary);
}

void bth8() {
    printf("Bai thuc hanh 8\n");
    void fun(int *ptr) {
        *ptr = 30;
    }
    int y = 20;
    fun(&y);
    printf("%d", y);
}

void bth9() {
    printf("Bai thuc hanh 9\n");
    int *ptr;
    int x;
    ptr = &x;
    *ptr = 0;
    printf(" x = %d\n", x);
    printf(" *ptr = %d \n", *ptr);
    *ptr += 5;
    printf(" x  = %d\n", x);
    printf(" *ptr = %d\n", *ptr);
    (*ptr)++;
    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);
}

void bth10() {
    printf("Bai thuc hanh 10\n");
    int a;
    char *x;
    x = (char *) &a;
    a = 512;
    x[0] = 1;
    x[1] = 2;
    printf("%d\n", a);
}

void bth11() {
    printf("Bai thuc hanh 11\n");
    void f(int *p, int *q) {
        p = q;
        *p = 2;
    }
    int i = 0, j = 1;
    f(&i, &j);
    printf("%d %d\n", i, j);
}

void bth12() {
    printf("Bai thuc hanh 12\n");
    int f(int x, int *py, int **ppz) {
        int y, z;
        **ppz += 1;
        z = **ppz;
        *py += 2;
        y = *py;
        x += 3;
        return x + y + z;
    }
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    printf("%d\n", f(c, b, a));
}
#define print(x) printf("%d ", x)
int x;
void Q(int z)
{
     z += x;
     print(z);
}
void P(int *y)
{
     int x = *y + 2;
     Q(x);
     *y = x - 1;
     print(x);
}

void bth13() {
    x = 5;
     P(&x);
     print(x);
     return 0;
}

void f(int* p, int m)
{
     m = m + 5;
     *p = *p + m;
     return;
}


void bth14() {
    printf("Bai thuc hanh 14\n");
    int i=5, j=10;
     f(&i, j);
     printf("%d", i+j);

}
int* findLarger(int *n1, int *n2)
{
    // So sánh giá trị của hai số và trả về con trỏ tới số lớn hơn
    if (*n1 > *n2)
        return n1;
    else
        return n2;
}
void bth15() {
     int numa = 0;
    int numb = 0;
    int *result;

    // Nhập giá trị cho hai số từ người dùng
    printf("\n\n Pointer : Show a function returning pointer:\n");
    printf("--------------------------------------------------\n");
    printf(" Input the first number : ");
    scanf("%d", &numa);
    printf(" Input the second number : ");
    scanf("%d", &numb);

    // Gọi hàm findLarger để tìm số lớn hơn và gán con trỏ kết quả
    result = findLarger(&numa, &numb);

    // In ra số lớn hơn
    printf(" The number %d is larger. \n\n", *result);
}

void bth16() {
    char ch;
    char* pCh;
    pCh = &ch;

    // Duyệt qua các ký tự từ 'A' đến 'Z'
    for(ch = 'A'; ch <= 'Z'; ch++) {
        // In ra giá trị của ký tự mà con trỏ pCh trỏ tới
        printf("%c ", *pCh);
    }
}

int gptb1(float a, float b, float *x) {
    if (a == 0) {
        if (b == 0) {
            return 1; // Phương trình vô số nghiệm
        } else {
            return 2; // Phương trình vô nghiệm
        }
    } else {
        *x = -b / a;
        return 0; // Phương trình có nghiệm duy nhất
    }
}


void bth17() {
        float a, b, x;
    scanf("%f", &a);
    scanf("%f", &b);

    int result = gptb1(a, b, &x);

    switch (result) {
        case 0:
            printf("%.2f\n", x); // In nghiệm x với 2 chữ số sau dấu phẩy
            break;
        case 1:
            printf("VO SO NGHIEM\n");
            break;
        case 2:
            printf("VO NGHIEM\n");
            break;
    }


}

int gptb2(float a, float b, float c, float *x1, float *x2) {
    float delta = b * b - 4 * a * c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                // Phương trình vô số nghiệm
                return 0;
            } else {
                // Phương trình vô nghiệm
                return 2;
            }
        } else {
            // Phương trình suy biến bậc 1
            *x1 = -c / b;
            return 3;
        }
    } else {
        if (delta < 0) {
            // Phương trình vô nghiệm
            return 2;
        } else if (delta == 0) {
            // Phương trình có nghiệm duy nhất
            *x1 = -b / (2 * a);
            return 0;
        } else {
            // Phương trình có hai nghiệm phân biệt
            *x1 = (-b + sqrt(delta)) / (2 * a);
            *x2 = (-b - sqrt(delta)) / (2 * a);
            return 1;
        }
    }
}


void bth18() {
    float a, b, c, x1, x2;

    scanf("%f %f %f", &a, &b, &c);

    int result = gptb2(a, b, c, &x1, &x2);

    switch (result) {
        case 0:
            printf("%.2f\n", x1);
            break;
        case 1:
            printf("%.2f %.2f\n", x1, x2);
            break;
        case 2:
            printf("VO NGHIEM\n");
            break;
        case 3:
            printf("SUY BIEN BAC 1\n");
            break;
    }

}
