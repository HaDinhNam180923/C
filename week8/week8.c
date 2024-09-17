#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PERIOD '.'
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
        case 8: bth8(); break;
        case 9: bth9(); break;
        case 10: bth10(); break;
        case 11: bth11(); break;
        case 12: bth12(); break;
        case 13: bth13(); break;
        case 14: bth14(); break;
        case 15: bth15(); break;
        case 16: bth16(); break;
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
    printf("\n------------------");
    printf("\nNhap tuy chon: ");
    scanf("%d", &tuy_chon);
    system("cls");
    return tuy_chon;
}

void bth1() {
     char ch;
     while ( (ch = getchar()) != PERIOD)
     putchar(ch);
     printf("Good Bye.\n");
}

void bth2() {
    int product = 2;
    while ( product <= 1000 )
    product = 2 * product;
    printf("product: %d", product);
}

void bth3() {
    int i = 1, sum = 0;
    do {
         sum += i;
         i++;
    } while (i <= 50);
    printf("The sum of 1 to 50 is %d\n", sum);
}

void bth4() {
    int counter = 1;
    do {
        printf( "%d ", counter );
    } while (++counter <= 10);
    printf("counter: %d", counter);
    // -----------------------
    counter = 1;
    do {
        printf( "%d ", counter );
    } while (counter++ <= 10);
    printf("counter: %d", counter);
}

void bth5() {
    int i;
    for(i=1; i<=10; i++) {
    if (i == 5)
    continue; // break;
    printf("%d\n", i);
    }
}

void bth6() {
    int c;
     int inspace;
     inspace = 0;
     while ((c = getchar()) != EOF)
        {
        if (c == ' ')
        {
            if(inspace == 0)
                {
                 inspace = 1;
                 putchar(c);
                }
        }
        if(c != ' ')
         {
             inspace = 0;
             putchar(c);
         }
         }
}

void bth7() {

     int c, d;
     while ( (c=getchar()) != EOF) {
         d = 0;
         if (c == '\\') {
             putchar('\\');
             putchar('\\');
             d = 1;
         }
         if (c == '\t') {
             putchar('\\');
             putchar('t');
             d = 1;
         }
         if (c == '\b') {
             putchar('\\');
             putchar('b');
             d = 1;
         }
         if (d == 0)
            putchar(c);
     }

}

void bth8() {
    int diem, tong_diem = 0, so_mon = 0;

    while (1) {
        scanf("%d", &diem);

        if (diem < 0)
            break;

        tong_diem += diem;
        so_mon++;
    }

    if (so_mon == 0) {
    } else {
        float diem_trung_binh = (float)tong_diem / so_mon;
        printf("%.2f\n", diem_trung_binh);
    }
}

double tinh_giai_thua(int n) {
    if (n == 0)
        return 1;
    double giai_thua = 1;
    for (int i = 1; i <= n; i++) {
        giai_thua *= i;
    }
    return giai_thua;
}

void bth9() {
    double X;
    int N;
    scanf("%lf", &X);
    scanf("%d", &N);

    double epsilon = pow(10, -N);
    double S = 0;
    double term = 1;
    int i = 1;

    do {
        S += term;
        term = pow(-1, i) * pow(X, 2 * i) / tinh_giai_thua(2 * i);
        i++;
    } while (fabs(term) >= epsilon);

    printf("%.2lf\n", S+term);


}

bool kiem_tra_palindrome(int N) {
    char str[20];
    sprintf(str, "%d", N);

    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

void bth10() {
    int N;
    scanf("%d", &N);

    if (kiem_tra_palindrome(N)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

}

void chuyen_sang_nhi_phan(int N) {
    if (N == 0) {
        printf("0");
        return;
    }

    int binary[32];
    int i = 0;

    while (N > 0) {
        binary[i] = N % 2;
        N = N / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

void bth11() {
    int N;
    scanf("%d", &N);

    chuyen_sang_nhi_phan(N);
    printf("\n");
}

int chuyen_sang_thap_phan(char binary[]) {
    int len = strlen(binary);
    int decimal = 0;
    int exponent = len - 1;

    for (int i = 0; i < len; i++) {
        int digit = binary[i] - '0';
        decimal += digit * pow(2, exponent);
        exponent--;
    }

    return decimal;
}

void bth12() {
    char binary[100];
    scanf("%s", binary);

    int decimal = chuyen_sang_thap_phan(binary);

    printf("%d\n", decimal);
}

int chuyen_sang_thap_phan1(char octal[]) {
    int thap_phan = 0;
    int len = 0;
    for (int i = 0; octal[i] != '\0'; i++) {
        len++;
    }
    for (int i = 0; octal[i] != '\0'; i++) {
        len--;
        thap_phan += (octal[i] - '0') * pow(8, len);
    }
    return thap_phan;
}

void chuyen_sang_nhi_phan1(int thap_phan, char binary[]) {
    if (thap_phan == 0) {
        strcpy(binary, "0");
        return;
    }
    int i = 0;
    while (thap_phan > 0) {
        binary[i] = (thap_phan % 2) + '0';
        thap_phan /= 2;
        i++;
    }
    binary[i] = '\0';
    // Đảo chuỗi nhị phân
    int len = strlen(binary);
    for (int j = 0; j < len / 2; j++) {
        char temp = binary[j];
        binary[j] = binary[len - j - 1];
        binary[len - j - 1] = temp;
    }
}

void bth13() {
    char octal[20];
    scanf("%s", octal);

    int thap_phan = chuyen_sang_thap_phan1(octal);

    char binary[80] = "";
    chuyen_sang_nhi_phan1(thap_phan, binary);

    printf("%s\n", binary);
}

int fibonacci(int n) {
    if (n <= 1)
        return n;
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

void bth14() {
    int N;
    scanf("%d", &N);

    int i = 0;
    while (fibonacci(i) < N) {
        i++;
    }

    int fib_max = fibonacci(i - 1);
    printf("%d\n", fib_max);

}

double factorial(int n) {
    if (n == 0)
        return 1;
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

void bth15() {

    double X;
    int N;
    scanf("%lf", &X);
    scanf("%d", &N);

    double epsilon = pow(10, -N);
    double S = 0;
    double term = 1;
    int i = 1;

    while (fabs(term) >= epsilon) {
        S += term;
        term = pow(X, i) / factorial(i);
        i++;
    }

    printf("%.2lf\n", S+term);

}

int convertToDecimal(char binary[]) {
    int len = strlen(binary);
    int decimal = 0;

    for (int i = len - 1; i >= 0; i--) {
        int digit = binary[i] - '0';
        decimal += digit * pow(2, len - i - 1);
    }
    return decimal;
}

int convertToOctal(int decimal) {
    int octal = 0, i = 1;

    while (decimal != 0) {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }
    return octal;
}

void bth16() {
    char binary[20];
    scanf("%s", binary);

    int decimal = convertToDecimal(binary);
    int octal = convertToOctal(decimal);

    printf("%d\n", octal);

}

