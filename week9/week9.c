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
        case 17: bth17(); break;
        case 18: bth18(); break;
        case 19: bth19(); break;
        case 20: bth20(); break;
        case 21: bth21(); break;
        case 22: bth22(); break;
        case 23: bth23(); break;
        case 24: bth24(); break;
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
    printf("\n19. Bai thuc hanh 19");
    printf("\n20. Bai thuc hanh 20");
    printf("\n21. Bai thuc hanh 21");
    printf("\n22. Bai thuc hanh 22");
    printf("\n23. Bai thuc hanh 23");
    printf("\n24. Bai thuc hanh 24");
    printf("\n------------------");
    printf("\nNhap tuy chon: ");
    scanf("%d", &tuy_chon);
    system("cls");
    return tuy_chon;
}
double square(double a)
{
    return a * a;
}
void bth1() {
     double num = 0.0, sqr = 0.0;
     printf("enter a number\n");
     scanf("%lf",&num);
     sqr = square(num);
     printf("square of %g is %g\n", num, sqr);
}

void sayHello ()
{
    printf("Hello World!\n");
}

void bth2() {
    sayHello();
}

int giaithua(int a) {
 int i, gt = 1;
 for(i=1; i<=a; i++)
 gt = gt * i;
 return gt;
}

void bth3() {
    int num;
     printf("Nhap so nguyen:");
     scanf("%d",&num);
     printf("%d! = %d\n", num, giaithua(num));
}

int i = 1;
int addOne ()
{
     i = i + 1;
     return i;
}


void bth4() {
     int i = 3;
     printf("%d\n", addOne() );
     printf("%d\n", i);

}

int a, b;
void swap() {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void bth5() {
    scanf("%d%d", &a, &b);
    swap(a, b);
    printf("%d\n%d", a, b);
}

int i;
void f() {
int i = 0;
    i++; // chỉ làm thay đổi giá trị biến i cục bộ
}
void g() {
    i++; // làm thay đổi giá trị của biến i tổng thể
}

void bth6() {
     i = 10;
     f();
     printf("i = %d", i);
     g();
     printf("\n i = %d", i);
}

float kineticEnergy(float m, float v) {
        float ke = 0.5 * m * v * v;
        return ke;
}

void bth7() {

     float m, v;
    while (scanf("%f %f", &m, &v) != EOF) {
        if (m > 0 && v > 0) {
            float ke = kineticEnergy(m, v);
            printf("%.2f\n", ke);
            break;
        } else {
            continue;
        }
    }

}

int is_prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void bth8() {
    int N;
    scanf("%d", &N);

    if (is_prime(N)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

long sumcube(int n) {
    long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i * i;
    }
    return sum;
}

void printsubmultiples(int n) {
    printf("Cac uoc so cua %d la: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void printsquares(int n) {
    printf("%d so binh phuong dau tien la: ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
}


void bth9() {
    int choice, n;
    printf("1. Tinh tong lap phuong tu 1 den n\n");
    printf("2. Liet ke uoc so cua mot so nguyen duong\n");
    printf("3. Liet ke n binh phuong dau tien\n");
    printf("Chon chuc nang: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Nhap n: ");
            scanf("%d", &n);
            printf("Tong lap phuong tu 1 den %d la: %ld\n", n, sumcube(n));
            break;
        case 2:
            printf("Nhap so nguyen duong N: ");
            scanf("%d", &n);
            printsubmultiples(n);
            break;
        case 3:
            printf("Nhap so n: ");
            scanf("%d", &n);
            printsquares(n);
            break;
        default:
            printf("Lua chon khong hop le!\n");
    }

}

long salary(int hours) {
    const int baseHours = 40;
    const long baseSalaryPerHour = 150000;
    const long overtimeMultiplier = 1.5;
    const int minHours = 10;
    const int maxHours = 65;

    if (hours < minHours || hours > maxHours) {
        return -1;
    }

    long totalSalary = 0;

    if (hours > baseHours) {
        totalSalary = baseHours * baseSalaryPerHour + (hours - baseHours) * baseSalaryPerHour * 1.5;
    } else {
        totalSalary += hours * baseSalaryPerHour;
    }

    return totalSalary;
}

void bth10() {
    int hours;
    scanf("%d", &hours);

    long totalSalary = salary(hours);

    if (totalSalary != -1) {
        printf("%ld\n", totalSalary);
    } else {
        printf("%d", -1);
    }

}

void printnchars(char ch, int n) {
    for(int i = 0; i < n; i++) {
        printf("%c", ch);
    }
    printf("\n");
}

void bth11() {
    for(int i = 1; i <= 5; i++) {
        printnchars('*', i);
    }
}

double celsius(double f) {
    return 5.0/9.0 * (f - 32);
}

void bth12() {
    printf("Fahrenheit\tCelsius\n");
    for(int f = 1; f <= 20; f++) {
        printf("%d\t\t%.2f\n", f, celsius(f));
    }
}

int DigitAllSame(int n) {
    int lastDigit = n % 10; // Lấy chữ số cuối cùng của số N
    int isEven = lastDigit % 2 == 0; // Kiểm tra xem chữ số cuối cùng có phải là số chẵn không

    n /= 10; // Bỏ đi chữ số cuối cùng của số N

    while (n > 0) {
        int digit = n % 10;
        if ((digit % 2 == 0) != isEven) {
            return 0; // Trả về 0 nếu có ít nhất một chữ số khác biệt
        }
        n /= 10; // Bỏ đi chữ số cuối cùng
    }

    return 1; // Trả về 1 nếu tất cả các chữ số giống nhau về tính chẵn lẻ
}

void bth13() {
    int N;
    scanf("%d", &N);

    if (DigitAllSame(N)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

}

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}


void bth14() {
    int year;
    scanf("%d", &year);

    if (isLeapYear(year)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

}

float mySin(float x, int N) {
    float epsilon = pow(10, -N);
    float result = 0.0;
    float term = x;
    int n = 1;

    while (fabs(term) >= epsilon) {
        result += term;
        term = -term * x * x / ((2 * n) * (2 * n + 1));
        n++;
    }

    return result;
}

void bth15() {

    float x;
    int N;
    scanf("%f", &x);
    scanf("%d", &N);

    float sin_x = mySin(x, N);
    printf("sin(%.2f) = %.2f\n", x, sin_x);
}

double factorial(int n) {
    double fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double power(double base, int exp) {
    double result = 1;
    while(exp) {
        if(exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }
    return result;
}

float myArcsin(float x, int M) {
    double epsilon = pow(10, -M);
    double arcsin = 0.0;
    double term;
    int i = 0;

    do {
        term = (factorial(2*i) / (power(4, i) * power(factorial(i), 2) * (2*i+1))) * power(x, 2*i+1);
        arcsin += term;
        i++;
    } while(fabs(term) > epsilon);

    return (float)arcsin;
}

void bth16() {
    float x;
    int M;
    scanf("%f", &x);
    scanf("%d", &M);
    printf("%.2f\n", myArcsin(x, M));
}

float tinhTong(int n) {
    float sum;
    for (int i = 0; i < n; i++) {
        sum += (float)1/(i+1);
    }
    return sum;
}

void bth17() {
    int n;
    scanf("%d", &n);
    printf("%f", tinhTong(n));

}

void printDiamond(int n) {
    int i, j;
    for(i=0; i<n; i++) {
        for(j=0; j<n-i-1; j++)
            printf(" ");
        for(j=0; j<2*i+1; j++)
            printf("*");
        printf("\n");
    }
    for(i=n-2; i>=0; i--) {
        for(j=0; j<n-i-1; j++)
            printf(" ");
        for(j=0; j<2*i+1; j++)
            printf("*");
        printf("\n");
    }
}

void bth18() {
    int n;
    scanf("%d", &n);
    printDiamond(n);

}

void printPyramid(int n) {
    int i, j, k;
    for(i=1; i<=n; i++) {
        for(j=n; j>i; j--)
            printf("  ");
        for(k=1; k<=i; k++)
            printf("%c ", 'A' + k - 1);
        for(k=i-1; k>=1; k--)
            printf("%c ", 'A' + k - 1);
        printf("\n");
    }
}

void bth19() {
    int n;
    scanf("%d", &n);
    printPyramid(n);
}

int highestCommonFactor(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

void bth20() {
    int a, b;
    scanf("%d %d", &a, &b);

    int hcf = highestCommonFactor(a, b);
    printf("%d\n", hcf);

}

int lowestCommonMultiple(int a, int b) {
    int lcm = (a * b) / highestCommonFactor(a, b);
    return lcm;
}

void bth21() {
    int a, b;
    scanf("%d %d", &a, &b);

    int lcm = lowestCommonMultiple(a, b);
    printf("%d\n", lcm);

}

float mySinh(float x) {
    float result = x;
    float term = x;
    float epsilon = pow(10, -10);
    int n = 1;

    while (fabs(term) >= epsilon) {
        term = term * x * x / ((2 * n) * (2 * n + 1));
        result += term;
        n++;
    }

    return result;
}

void bth22() {
    float x;
    printf("Nhập giá trị của x: ");
    scanf("%f", &x);

    float sinh_x = mySinh(x);
    printf("sinh(%.2f) = %.10f\n", x, sinh_x);

}

float myCosh(float x) {
    float result = 1; // Khởi tạo giá trị cosh(0)
    float term = 1; // Điều này tương ứng với n = 0 trong khai triển Taylor
    float epsilon = pow(10, -10);
    int n = 1;

    while (fabs(term) >= epsilon) {
        term = term * x * x / ((2 * n - 1) * (2 * n)); // Công thức tổng quát của khai triển Taylor cho cosh(x)
        result += term;
        n++;
    }

    return result;
}

void bth23() {
    float x;
    printf("Nhập giá trị của x: ");
    scanf("%f", &x);

    float cosh_x = myCosh(x);
    printf("cosh(%.2f) = %.10f\n", x, cosh_x);


}

float myArctan(float x) {
    float result = x; // Khởi tạo giá trị arctan(x) tương ứng với n = 1 trong khai triển Taylor
    float term = x; // Điều này tương ứng với n = 1 trong khai triển Taylor
    float epsilon = pow(10, -10);
    int n = 1;

    while (fabs(term) >= epsilon) {
        term = term * (-x * x) / (2 * n + 1); // Công thức tổng quát của khai triển Taylor cho arctan(x)
        result += term;
        n++;
    }

    return result;
}

void bth24() {
    float x;
    printf("Nhập giá trị của x: ");
    scanf("%f", &x);

    float arctan_x = myArctan(x);
    printf("arctan(%.2f) = %.10f\n", x, arctan_x);

}


