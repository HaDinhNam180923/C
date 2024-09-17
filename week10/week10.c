#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#define ARRAY_SIZE 10
#include <stdbool.h>

int menu();
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
        case 9: bth9a(); break;
        case 10: bth10(); break;
        case 11: bth11(); break;
        case 12: bth12(); break;
        case 13: bth13(); break;
        case 14: bth14(); break;
        case 15: bth15(); break;
        case 16: bth16(); break;
        case 17: bth17(); break;
        case 18: bth18(); break;
        case 19: bth8b(); break;
        case 20: bth9b(); break;
        case 21: bth9c(); break;
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
    printf("\n9. Bai thuc hanh 9a");
    printf("\n10. Bai thuc hanh 10");
    printf("\n11. Bai thuc hanh 11");
    printf("\n12. Bai thuc hanh 12");
    printf("\n13. Bai thuc hanh 13");
    printf("\n14. Bai thuc hanh 14");
    printf("\n15. Bai thuc hanh 15");
    printf("\n16. Bai thuc hanh 16");
    printf("\n17. Bai thuc hanh 17");
    printf("\n18. Bai thuc hanh 18");
    printf("\n19. Bai thuc hanh 8b");
    printf("\n20. Bai thuc hanh 9b");
    printf("\n21. Bai thuc hanh 9c");
    printf("\n------------------");
    printf("\nNhap tuy chon: ");
    scanf("%d", &tuy_chon);
    system("cls");
    return tuy_chon;
}

void bth1() {
     int s[ARRAY_SIZE]; // array S has 10 elements
     int i;
    for ( i = 0; i < ARRAY_SIZE; i++ )
        s[i] = 2 + 2 * i;
    printf("Element \t Value\n");
    for ( i = 0; i < ARRAY_SIZE; i++ )
        printf("%d\t%d\n", i, s[i]);

}

#define MONTHS 12

void bth2() {
    int rainfall[MONTHS] = {40, 45, 95, 130, 220, 210, 185, 135, 80, 40, 45, 30};
    int i, choice;

    printf("Nhap 1 de nhap du lieu luong mua, nhap 0 de su dung du lieu mac dinh: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Nhập dữ liệu lượng mưa cho 12 tháng
        printf("\nNhap luong mua cua 12 thang (mm):\n");
        for (i = 0; i < MONTHS; i++) {
            printf("Thang %d: ", i + 1);
            scanf("%d", &rainfall[i]);
        }
    }

    // In lượng mưa của từng tháng ra màn hình
    printf("\nLuong mua cua 12 thang:\n");
    for (i = 0; i < MONTHS; i++) {
        printf("Thang %d: %d mm\n", i + 1, rainfall[i]);
    }
}



void bth3() {
    int A[10];
    int N, i;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (i = N - 1; i >= 0; i--) {
        printf("%5d", A[i]);
    }
}




void bth4() {
     int A[20];
    int N, i;
    int sumOdd = 0;
    int minEven = INT_MAX;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        if (A[i] % 2 != 0) {
            sumOdd += A[i];
        } else if (A[i] < minEven) {
            minEven = A[i];
        }
    }

    printf("%d\n", sumOdd);
    if (minEven == INT_MAX) {
        printf("Không có số chẵn trong mảng\n");
    } else {
        printf("%d\n", minEven);
    }


}

void bth5() {
    int A[20];
    int N, i;
    int sum = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (i = 1; i < N - 1; i++) {
        if (A[i] > A[i - 1] && A[i] > A[i + 1]) {
            sum += A[i];
        }
    }

    printf("%d\n", sum);
}

int calc_sum(int arr[], int size) {
    int i, sum = 0;
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

void bth6() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int total = calc_sum(arr, size);
    printf("Tong cac phan tu cua mang la: %d\n", total);
}

int compare_arrays(const int arr1[], const int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return 0;
        }
    }
    return 1;
}

void bth7() {

     int N;
    scanf("%d", &N);

    int arr1[10], arr2[10];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr2[i]);
    }

    if (compare_arrays(arr1, arr2, N)) {
        printf("YES");
    } else {
        printf("NO");
    }

}

void DesSort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void bth8a() {
    int a[10];
    int n, i;


    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    DesSort(a, n);

    for (i = 0; i < n; i++) {
        printf("%5d", a[i]);
    }
}



int count_zeros(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            count++;
        }
    }
    return count;
}

void bth9a() {
    int N;
    scanf("%d", &N);

    int arr[10];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", count_zeros(arr, N));


}

#define SIZE 10

void bth10() {
    int multiplicationTable[SIZE][SIZE];
    int m, n;

    // Tạo bảng cửu chương
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (j == 9) {
                multiplicationTable[i][j] = (i + 1) * 10;
            } else {
                multiplicationTable[i][j] = (i + 1) * (j + 1);
            }
        }
    }

    // Nhập m và n từ người dùng
    printf("Nhap hai so nguyen m va n (1 <= m <= 10, 1 <= n <= 10): ");
    scanf("%d %d", &m, &n);

    // Kiểm tra giá trị của m và n
    if (m < 1 || m > 10 || n < 1 || n > 10) {
        printf("Gia tri m va n khong hop le!\n");
        return 1;
    }

    // Tìm và in ra giá trị của m x n trong bảng cửu chương
    printf("%d x %d = %d\n", m, n, multiplicationTable[m - 1][n - 1]);
}

#define SIZE1 3

void bth11() {
    int A[SIZE1][SIZE1] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[SIZE1][SIZE1] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[SIZE1][SIZE1];

    printf("Ma tran A:\n");
    for (int i = 0; i < SIZE1; i++) {
        for (int j = 0; j < SIZE1; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMa tran B:\n");
    for (int i = 0; i < SIZE1; i++) {
        for (int j = 0; j < SIZE1; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Tính C = A * B
    for (int i = 0; i < SIZE1; i++) {
        for (int j = 0; j < SIZE1; j++) {
            C[i][j] = 0;
            for (int k = 0; k < SIZE1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMa tran C = A * B:\n");
    for (int i = 0; i < SIZE1; i++) {
        for (int j = 0; j < SIZE1; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}



void bth12() {
    int N, i;
    int A[10];

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Kiểm tra tính đối xứng
    for (i = 0; i < N / 2; i++) {
        if (A[i] != A[N - i - 1]) {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
}

void reverse(float arr[], int size) {
    int i, j;
    float temp;
    for (i = 0, j = size - 1; i < j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
#define MAX_SIZE 100

void bth13() {
    float arr[MAX_SIZE];
    int size, i;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &size);

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < size; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    printf("\nMang truoc khi dao nguoc: ");
    for (i = 0; i < size; i++) {
        printf("%.2f ", arr[i]);
    }

    reverse(arr, size);

    printf("\nMang sau khi dao nguoc: ");
    for (i = 0; i < size; i++) {
        printf("%.2f ", arr[i]);
    }

    printf("\n");

}




void bth14() {
    int arr[MAX_SIZE], even[MAX_SIZE], odd[MAX_SIZE];
    int size, evenCount = 0, oddCount = 0;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &size);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Phan tach so chan va so le
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }

    printf("\nMang ban dau: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nMang chua cac so chan: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }

    printf("\nMang chua cac so le: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }

    printf("\n");

}

void sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void bth15() {

    int N, i, newElement;
    int A[10];

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &newElement);

    // Sắp xếp mảng
    sort(A, N);

    // Tìm vị trí phù hợp để chèn phần tử mới
    for (i = 0; i < N; i++) {
        if (A[i] > newElement) {
            printf("%d\n", i);
            return 0;
        }
    }

    printf("%d\n", N);
}




void bth16() {
    int A[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int det = A[0][0]*(A[1][1]*A[2][2] - A[2][1]*A[1][2]) - A[0][1]*(A[1][0]*A[2][2] - A[2][0]*A[1][2]) + A[0][2]*(A[1][0]*A[2][1] - A[2][0]*A[1][1]);

    printf("%d", det);
}

float sigmoid(float x) {
    return 1 / (1 + exp(-x));
}

float g(float x1, float x2) {
    float result;
    float w1 = 2, w2 = 4, b = -5; // Các giá trị đã được điền
    result = sigmoid(w1 * x1 + w2 * x2 + b);
    return result;
}

void bth17() {
    int x1, x2;
    float probs;
    scanf("%d%d", &x1, &x2);
    probs = g(x1, x2);
    if (probs >= 0.5)
        printf("CLASS 1");
    else
        printf("CLASS 0");;

}

float ReLU(float x) {
    if (x >= 0)
        return x;
    else
        return 0;
}

float g1(float x1, float x2) {
    float result;
    float w11 = 4, w12 = -3, c1 = 1;
    float w21 = -3, w22 = 4, c2 = 1;
    float w1 = 1, w2 = 1, b = -4;
    float h1, h2, g1, g2;
    h1 = w11 * x1 + w12 * x2 + c1;
    h2 = w21 * x1 + w22 * x2 + c2;
    g1 = ReLU(h1);
    g2 = ReLU(h2);
    result = w1 * g1 + w2 * g2 + b;
    return result;
}

void bth18() {
    int x1, x2;
    float probs;
    scanf("%d%d", &x1, &x2);
    probs = g1(x1, x2);
    if (probs >= 0.5)
        printf("CLASS 1");
    else
        printf("CLASS 0");

}

void OddSort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            for (int j = i + 1; j < n; j++) {
                if (a[j] % 2 != 0 && a[i] < a[j]) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }
}

void bth8b() {
    int N;
    scanf("%d", &N);

    int arr[10];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    OddSort(arr, N);

    for (int i = 0; i < N; i++) {
        printf("%5d", arr[i]);
    }
}

int longest_zero_sequence(int a[], int n) {
    int max_length = 0, current_length = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            current_length++;
            if (current_length > max_length) {
                max_length = current_length;
            }
        } else {
            current_length = 0;
        }
    }
    return max_length;
}

void bth9b() {
    int N;
    scanf("%d", &N);

    int arr[10];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", longest_zero_sequence(arr, N));

}

void sort1(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void bth9c() {
    int N, i, j;
    int A[10], count[10] = {0};

    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    sort1(A, N);

    for (i = 0; i < N; i++) {
        count[i] = 1;
        for (j = i + 1; j < N; j++) {
            if (A[i] == A[j]) {
                count[i]++;
                A[j] = -1809;
            }
        }
    }
    for (i = 0; i < N; i++) {
        if (A[i] != -1809) {
            printf("%d %d\n", A[i], count[i]);
        }
    }

}





