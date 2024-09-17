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
        default: printf("Tuy chon khong hop le.\n"); break;
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
    int x[4];
    int i;
    for(i = 0; i < 4; ++i) {
        printf("&x[%d] = %p\n", i, (void*)&x[i]);
    }
    printf("Address of array x: %p\n", (void*)x);
}

void bth2() {
    int a[3] = {17, 289, 4913};
    int *p, *q;
    p = a;
    q = p + 2;
    printf("a is %p\n", (void*)a);
    printf("p is %p, q is %p\n", (void*)p, (void*)q);
    printf("p points to %d and q points to %d\n", *p, *q);
    printf("The pointer distance between p and q is %ld\n", q - p);
    printf("The integer distance between p and q is %ld\n", (long)q - (long)p);
}

void bth3() {
    int i, x[3], sum = 0;
    printf("Enter 3 numbers: ");
    for(i = 0; i < 3; ++i) {
        scanf("%d", x + i);
        sum += *(x + i);
    }
    printf("Sum = %d\n", sum);
}

void bth4() {
    int x[5] = {1, 2, 3, 4, 5};
    int* ptr;
    ptr = &x[2];
    printf("*ptr = %d\n", *ptr);
    printf("*(ptr+1) = %d\n", *(ptr + 1));
    printf("ptr[1] = %d\n", ptr[1]);
    printf("*(ptr-1) = %d\n", *(ptr - 1));
    printf("ptr[-1] = %d\n", ptr[-1]);
}

int addNumbers(int *fiveNumbers) {
    int i, sum = 0;
    for(i = 0; i < 5; i++, fiveNumbers++) {
        sum += *fiveNumbers;
    }
    return sum;
}

void bth5() {
    int X[5], S, i;
    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &X[i]);
    }
    S = addNumbers(X);
    printf("Sum = %d\n", S);
}

int countEven(int* arr, int size) {
    int i, count = 0;
    for (i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0) count++;
    }
    return count;
}

void bth6() {
    int N, i;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    int X[N];
    printf("Enter %d numbers: ", N);
    for(i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }
    int S = countEven(X, N);
    printf("Number of even elements = %d\n", S);
}

double* maximum(double* a, int size) {
    if (size == 0) return NULL;
    double *max = a;
    for (int i = 1; i < size; i++) {
        if (*(a + i) > *max) {
            max = (a + i);
        }
    }
    return max;
}

void bth7() {
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    double X[N];
    printf("Enter %d numbers: ", N);
    for(int i = 0; i < N; i++) {
        scanf("%lf", &X[i]);
    }
    double *pS = maximum(X, N);
    if (pS != NULL) {
        printf("Maximum value is %lf\n", *pS);
        printf("Pointer to maximum value is %p\n", (void*)pS);
    } else {
        printf("Array is empty.\n");
    }
}

void getSales(double* sales, int quarters) {
    for(int i = 0; i < quarters; i++) {
        printf("Enter sales for quarter %d: ", i + 1);
        scanf("%lf", &sales[i]);
    }
}

double totalSales(double* sales, int quarters) {
    double total = 0;
    for(int i = 0; i < quarters; i++) {
        total += sales[i];
    }
    return total;
}

void bth8() {
    int quarters = 4;
    double sales[quarters];
    getSales(sales, quarters);
    double total = totalSales(sales, quarters);
    printf("Total sales for the year = %lf\n", total);
}

void bth9() {
    int* ptrarray[4];
    int w = 100, x = 200, y = 300, z = 400;
    ptrarray[0] = &w;
    ptrarray[1] = &x;
    ptrarray[2] = &y;
    ptrarray[3] = &z;
    for (int i = 0; i < 4; i++) {
        printf("The value %d has the address %p\n", *ptrarray[i], (void*)ptrarray[i]);
    }
}

void bth10() {
    const int MAX = 3;
    int var[] = {10, 100, 200};
    int i, *ptr[MAX];
    for (i = 0; i < MAX; i++) {
        ptr[i] = &var[i];
    }
    for (i = 0; i < MAX; i++) {
        printf("Value of var[%d] = %d\n", i, *ptr[i]);
    }
}

void bth11() {
    const int MAX = 4;
    char *names[] = {"Zara Ali", "Hina Ali", "Nuha Ali", "Sara Ali"};
    int i;
    for (i = 0; i < MAX; i++) {
        printf("Value of names[%d] = %s\n", i, names[i]);
    }
}


void reversearray(int arr[], int size) {
    int i, j, tmp;
    i = 0;
    j = size - 1;
    while (i < j) {
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        i++;
        j--;
    }
}

void reversearray_ptr(int *arr, int size) {
    int i, j, tmp;
    i = 0;
    j = size - 1;
    while (i < j) {
        tmp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = tmp;
        i++;
        j--;
    }
}

void bth12() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reversearray(arr, n);
    printf("Mang sau khi dao nguoc su dung chi so: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reversearray_ptr(arr, n);
    printf("Mang sau khi dao nguoc su dung con tro: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bth13() {
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;
    printf("%d ", ++*p);
    p += 2;
    printf("%d ", *p);
}

void f(char **p) {
    char *t;
    t = (p += sizeof(int))[-1];
    printf("%s\n", t);

    for (int i = 0; i < 6; i++) {
        printf("argv[%d] = %s\n", i, p[i - sizeof(int) / sizeof(char*)]);
    }
}

void bth14() {
    char *argv[] = { "ab", "cd", "ef", "gh", "ij", "kl" };
    f(argv);
}

void bth15() {
    char str1[] = "trytoprogram";
    char str2[50];
    char *ptr1 = "hello world";
    char *ptr2;

    // str2 = str1; // Lỗi: Không thể gán mảng trực tiếp
    ptr2 = ptr1; // Hợp lệ
    // str1 = "program"; // Lỗi: Không thể gán mảng đã khởi tạo

    ptr1 = "program"; // Hợp lệ
    printf("Xau ptr 1 : %s \t Xau ptr2: %s \n", ptr1, ptr2);
}

void bth16() {
    char *ptr = "ABCDE";
    printf("%c", *&*&*ptr);
}

void bth17() {
    int i, N = 5;
    float X = 3.5;
    char A[4] = {'a', 'b', 'c', 'd'};
    void *pi, *pf;
    void *pc = A;

    pi = &N;
    pf = &X;

    printf("%p\n%p\n", pi, pf);

    for (i = 0; i < 4; i++) {
        printf("%c ", ((char*)pc)[i]);
    }
}

void bth18() {
    char A[4] = {'a', 'b', 'c', 'd'};
    char *pTmp;
    void *pC = A;
    pTmp = (char*)pC;

    for (int i = 0; i < 4; i++) {
        printf("%c ", *(pTmp++));
    }
}
