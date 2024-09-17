#include <stdio.h>
#include <limits.h>
#include <math.h>
#define DA 0.12
#define HRA 150
#define TA 120
#define OT 450
#define PF 0.14
#define IT 0.15


#define PI 3.14159


void bai_thuc_hanh_1() {
    int num1, num2;

    printf( "Enter two integers, and I will tell you\n" );
     printf( "the relationships they satisfy: " );
     scanf( "%d%d", &num1, &num2 ); /* read two integers */

     if ( num1 == num2 )
     printf( "%d is equal to %d\n", num1, num2 );

     if ( num1 != num2 )
     printf( "%d is not equal to %d\n", num1, num2 );

     if ( num1 < num2 )
     printf( "%d is less than %d\n", num1, num2 );

     if ( num1 > num2 )
     printf( "%d is greater than %d\n", num1, num2 );

     if ( num1 <= num2 )
     printf( "%d is less than or equal to %d\n", num1, num2 );
     if ( num1 >= num2 )
     printf( "%d is greater than or equal to %d\n", num1, num2 );
}

void bai_thuc_hanh_2() {
     int a = 2;
    if (a = 1) { // a == 1
     printf("a = 1");
    } else {
     printf("a khac 1");
    }
    printf("a = %d", a);
}

void bai_thuc_hanh_3() {
     float score;
    scanf("%f", &score);
    if (6.5 <= score && score<= 6.9)
    printf("C+");
    if (7.0 <= score && score <= 7.9)
    printf("B");
}

void bai_thuc_hanh_4() {
     int a, b;
    scanf("%d%d", &a, &b);
    printf("%d %x\n", a&b, (unsigned char)a&b);
    printf("%d %x\n", a|b, (unsigned char)a|b);
    printf("%d %x\n", a^b, (unsigned char)a^b);
    printf("%d %x\n", ~a, (unsigned char)~a);
    printf("%d %x\n", a << 2, (unsigned char)a << 2);
    printf("%d %x\n", a >> 2, (unsigned char)a >> 2);
}

void bai_thuc_hanh_5() {
    int x, y;
    x = 4;
    y = x++ + 5;
    printf("%d\n", x);
    printf("%d\n", y);
    x = 4;
    y = ++x + 5;
    printf("%d\n", x);
    printf("%d\n", y);
}

void bai_thuc_hanh_6() {
    int a = 5, b = 6, c = 7;
     puts("int a = 5, b = 6, c = 7;\n");
     printf("The value of a = b-c is\t%i\n\n", a = b-c);
     printf("The value of a > b is \t%i\n\n", a > b);
     printf("The value of b < c is \t%i\n\n", b < c);
     printf("The value of a + b >= c is \t%i\n\n", a + b >= c);
     printf("The value of a - b <= b-c is\t%i\n\n", a - b <= b - c);

     printf("The value of b - a == b - c is\t%i\n\n", b- a == b- c);
     printf("The value of a * b != c * c is\t%i\n\n", a * b < c * c);
}

void bai_thuc_hanh_7() {
     int n, m;

     printf("Enter a positive or negative integer: ");
     scanf("%i", &n);

     printf("\nYou entered %i.\n", n);
     printf("Its absolute value is %i.\n", n < 0 ? -n : n);
     printf("\nEnter two integers (e.g. 1 2): ");
     scanf("%i %i", &n, &m);

     printf("\nYou entered %i and %i.\n", n, m);
     printf("%i is the larger value.\n", n > m ? n : m);
}

void bai_thuc_hanh_8() {
    unsigned int x = UINT_MAX - 1;
     signed int y = INT_MAX - 1;

     printf("x is an unsigned int, occupying %i bytes.\n\n",
    sizeof(x));

     printf("The initial value of x is %u\n", x);
     x++;
     printf("Add 1; the new value of x is %u\n", x);
     x++;

    printf("Add 1; the new value of x is %u\n", x);
     x++;
     printf("Add 1; the new value of x is %u\n", x);

     printf("\ny is a signed int, occupying %i bytes.\n\n", sizeof(y));

     printf("The initial value of y is %i\n", y);
     y++;
     printf("Add 1; the new value of y is %i\n", y);
     y++;
     printf("Add 1; the new value of y is %i\n", y);
     y++;
     printf("Add 1; the new value of y is %i\n", y);
}

void bai_thuc_hanh_9() {
    float a, b;
    scanf("%f", &a);
    scanf("%f", &b);

    (a == 0) ? (b == 0 ? printf("VO SO NGHIEM") : printf("VO NGHIEM")) : printf("%.2f", -b/a);

}

void bai_thuc_hanh_10() {
    printf("%d\n", 7 + 5 && 4 < 2 + 3 - 2 / 3 || 5 > 2 + 1);
}

void bai_thuc_hanh_11() {
    int a = 10;
    int b = 7;
    float c = 15.75;
    float d = 4;
    int e  = 8;
    float f = 5.6;
    float z = a/b + c*d - e%(int)f;
    printf("%f\n", z);
    z = a/b + c*d - e*f;
    printf("%f", z);
}

void bai_thuc_hanh_12() {
    int x;
    float y;
    scanf("%d", &x);
    printf("%.2f", x + (float)(x*DA) + HRA + TA + OT - (float)(x*PF)- (float)(x*IT));
}

void bai_thuc_hanh_13() {
    float x, y;
    int n;

    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%d", &n);

    float T = sqrt(pow(x, 5) + exp(log(fabs(y)) + 1)) + (1 + sin(x)) / (cos(n * x) + sqrt(2 + fabs(n)));

    printf("%.2f\n", T);
}

void bai_thuc_hanh_14() {
    int i, m, n, k;
    scanf("%d%d%d", &n, &m, &k);
    i = (m>n) ? m : n;
    i = (i>k) ? i : k;
    printf("%d", i);
}

void bai_thuc_hanh_15() {
    int n, h, m, s;
    scanf("%d", &n);
    h = n/3600;
    m = (n - h*3600)/60;
    s = n - h * 3600 - m * 60;
    printf("H:M:S - %d:%d:%d", h, m, s);
}

void bai_thuc_hanh_13b() {
    float si, mu, x1, x2, fx1, fx2;
    scanf("%f%f", &mu, &si);
    x1 = si + mu;
    x2 = 2*si + mu;
    fx1 = (1/(si*sqrt(2*PI))*exp(-0.5*pow((x1-mu), 2)/pow(si, 2)));
    fx2 = (1/(si*sqrt(2*PI))*exp(-0.5*pow((x2-mu), 2)/pow(si, 2)));
    printf("%.2f\n%.2f", fx1, fx2);
}

int main() {
    bai_thuc_hanh_1();
//    bai_thuc_hanh_2();
//    bai_thuc_hanh_3();
//    bai_thuc_hanh_4();
//    bai_thuc_hanh_5();
//    bai_thuc_hanh_6();
//    bai_thuc_hanh_7();
//    bai_thuc_hanh_8();
//    bai_thuc_hanh_9();
//    bai_thuc_hanh_10();
//    bai_thuc_hanh_11();
//    bai_thuc_hanh_12();
//    bai_thuc_hanh_13();
//    bai_thuc_hanh_14();
//    bai_thuc_hanh_15();
//    bai_thuc_hanh_13b();
    return 0;
}
