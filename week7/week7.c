#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
        case 10: bth10a(); break;
        case 11: bth11a(); break;
        case 12: bth12(); break;
        case 13: bth13(); break;
        case 14: bth14(); break;
        case 15: bth15(); break;
        case 16: bth16(); break;
        case 17: bth17(); break;
        case 18: bth18(); break;
        case 19: bth19(); break;
        case 20: bth20b(); break;
        case 21: bth10b(); break;
        case 22: bth11b(); break;
        case 23: bth11c(); break;
        case 24: bth20a(); break;
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
    printf("\n10. Bai thuc hanh 10a");
    printf("\n11. Bai thuc hanh 11a");
    printf("\n12. Bai thuc hanh 12");
    printf("\n13. Bai thuc hanh 13");
    printf("\n14. Bai thuc hanh 14");
    printf("\n15. Bai thuc hanh 15");
    printf("\n16. Bai thuc hanh 16");
    printf("\n17. Bai thuc hanh 17");
    printf("\n18. Bai thuc hanh 18");
    printf("\n19. Bai thuc hanh 19");
    printf("\n20. Bai thuc hanh 20b");
    printf("\n21. Bai thuc hanh 10b");
    printf("\n22. Bai thuc hanh 11b");
    printf("\n23. Bai thuc hanh 11c");
    printf("\n24. Bai thuc hanh 20a");
    printf("\n------------------");
    printf("\nNhap tuy chon: ");
    scanf("%d", &tuy_chon);
    system("cls");
    return tuy_chon;
}

void bth1() {
    int x = 2;
    int y = 6;
    for ( int j = x; j <= x * y; j += y / x )
    printf("j = %d\n", j);
}

void bth2() {
    int x = 2;
    int y = 10 ;
    for (int j = x; j <= x * y; j += y / x )
    {
     printf("j = %d y = %d\n", j, y);
     y = y + 2;
    }

}

void bth3() {
    int i;
    int x = 0;
    for (i=1; i<=100; i++) {
     x += i;
     if ((x % i) == 0) { i--; }
     printf("\nx = %d ", x);
     printf("i = %d", i);
    }
    printf("\n Ket qua sau khi thuc hien vong lap");
    printf("\n x = %d", x);
    printf("\n i = %d", i);
}

void bth4() {
    char c;
    int count;
    for (count = 0; (c != '.'); count++){
        c = getchar();
      }
    printf("Number of characters is %d\n", count-1);
}

void bth5() {
    int i, N, a = 0, b;
    scanf("%d", &N);
    for (i = 0; i < N; i++){
        scanf("%d", &b);
        a += b*b;
    }
    printf("%d\n%f", a, (float)a/N);
}

void bth6() {
    int i, N, a;
    scanf("%d", &N);
    for (i = 0; i < N; i++){
        for (a = 0; a <= i; a++){
            printf("*");
        }
        printf("\n");
    }
}

void bth7() {
    int i, j;
     printf("%d\n", 2);
     for (i = 3; i <= 100; i = i + 2)
    {
     for (j = 2; j < i; j = j + 1)
     {
     if (i % j == 0)
     break;
     if (j > sqrt(i))
     {
     printf("%d\n", i);
     break;
    } // end if (j
    } // end for (i=2 …)
    } // end for (i=3 …)
}

void bth8() {
    int i, j; /* loop control variables */
     printf(" I J\n"); /* prints column labels */
     for (i = 1; i < 4; i = i + 1) /* heading of outer for loop */
     {
     printf("Outer %6d\n", i);
     for (j = 0; j < i; j = j + 1) /* heading of inner loop */
     {
     printf(" Inner%9d\n", j);
     } /* end of inner loop */
     } /* end of outer loop */
     return 0;
}

void bth9() {
    int N1, N2, sum;
    scanf("%d%d", &N1, &N2);
    for(int i = N1; i <= N2; i++){
        sum = 0;
        for (int j = 1; j <= i/2+2; j++){
            if (i % j == 0 && i != j) sum += j;
        }
        if (sum == i) printf("%d\n", i);
    }

}

void bth10a() {
    int i, N, a, b = 1;
    scanf("%d", &N);
    for (i = 0; i < N; i++){
        for (a = 0; a <= i; a++){
            printf("%d ", b);
            b++;
        }
        printf("\n");
    }

}

void bth11a() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++){
            for (int k = 1; k<=N-i; k++){
                printf(" ");
            }
        for (int j = 1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void bth12() {
    float x, s = 1, a;
    int n, gt;
    scanf("%f%d", &x, &n);
    for(int i = 1; i < n; i++){
        gt = 1;
        a = 1;
        for (int j = 1; j <= 2*i; j++) {
            gt = gt * j;
            a = a*x;
        }
        if (i % 2 == 1) s = s - (float)a/gt;
            else s = s + (float)a/gt;
    }
    printf("%.2f", s);
}

void bth13() {
    int N, s = 0;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        s += 9*pow(10, N-i)*i;
    }
    printf("%d", s);
}

void bth14() {
    int i, N, a, b;
    scanf("%d", &N);
    for (i = 0; i < N; i++){
        if (i % 2 == 0) b = 1;
                else b = 2;
        for (a = 0; a <= i; a++){
            if (b % 2 == 1) printf("1 ");
                else printf("0 ");
            b++;
        }
        printf("\n");
    }

}

void bth15() {

    int N, s = 0;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        s += pow(10, N-i)*i;
    }
    printf("%d", s);
}

void bth16() {
    int N;
    scanf("%d", &N);

    int start = (int)pow(10, N - 1);
    int end = (int)pow(10, N) - 1;

    for (int i = start; i <= end; i++) {
        int number = i;
        int sum = 0;
        while (number > 0) {
            int digit = number % 10;
            sum += (int)pow(digit, N);
            number /= 10;
        }
        if (sum == i) {
            printf("%d\n", i);
        }
    }

}
int cc(int a, int b){
    int res = 1;
    for(int m = 1; m <= a; m++){
        res = res * m;
    }
    for(int m = 1; m <= b; m++){
        res = res / m;
    }
    for(int m = 1; m <= a-b; m++){
        res = res / m;
    }
    return res;
}
void bth17() {
    int N, res;
    scanf("%d", &N);
    printf("%d\n", 1);
    for(int i = 1; i < N; i++){
        for(int j = 0; j <= i; j++){
            res = cc(i, j);
            printf("%d   ", res);
        }
        printf("\n");
    }
}
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
void bth18() {
    int N;
    scanf("%d", &N);

    printf("%d", fibonacci(N+1));
}
void bth19() {
    int N, M;
    scanf("%d %d", &N, &M);

    int maxDivisor = 1;
    for (int i = 1; i <= N && i <= M; i++) {
        if (N % i == 0 && M % i == 0) {
            maxDivisor = i;
        }
    }

    int minMultiple = (N * M) / maxDivisor;
    printf("UCLN: %d\n", maxDivisor);
    printf("BCNN: %d\n", minMultiple);
}
void bth20b() {
    int N;
    scanf("%d", &N);



    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j++) {
            printf("%d ", j);
        }
        for (int k = i - 1; k >= 1; k--) {
            printf("%d ", k);
        }
        printf("\n");
    }
}
void bth10b() {
    int i, N, a, b = 1;
    scanf("%d", &N);
    for (i = 0; i < N; i++){
        for (a = 1; a <= N-1-i; a++) printf(" ");
        for (a = 0; a <= i; a++){
            printf("%d ", b);
            b++;
        }
        printf("\n");
    }

}
void bth11b() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        for (int a = 1; a <= N-1-i; a++) printf("  ");
        for (int a = 0; a < 2*i+1; a++) printf("* ");
        printf("\n");
    }
    for (int i = N-2; i >= 0; i--){
        for (int a = 1; a <= N-1-i; a++) printf("  ");
        for (int a = 0; a < 2*i+1; a++) printf("* ");
        printf("\n");
    }
}
void bth11c() {

}
void bth20a() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++){
        int a = i;
        for (int j = 1; j <= N; j++){
            printf("%d", a);
            a++;
        }
        printf("\n");
    }
}
