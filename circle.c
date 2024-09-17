// Ch��ng tr?nh cho ph�p t?o ra m?t m?ng �?ng c�c ph?n t? l� c�c h?nh tr?n
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Circle* findMostIntersectedCircle(Circle* circles, int n) {

    // Kh?i t?o bi?n �? l�u tr? h?nh tr?n giao v?i nhi?u h?nh tr?n kh�c nh?t
    Circle* mostIntersectedCircle = NULL;
    int maxIntersect = 0;

    // Duy?t qua t?t c? c�c h?nh tr?n
    for (int i = 0; i < n; i++) {
        int intersect = 0;

        // Duy?t qua t?t c? c�c h?nh tr?n kh�c
        for (int j = i + 1; j < n; j++) {
            if (checkIntersect(circles[i], circles[j])) {
                intersect++;
            }
        }

        // N?u s? l�?ng h?nh tr?n giao nhau nhi?u h�n th? c?p nh?t
        if (intersect > maxIntersect) {
            maxIntersect = intersect;
            mostIntersectedCircle = &circles[i];
        }
    }
// Khai b�o c?u tr�c h?nh tr?n
struct Circle {
    int x;
    int y;
    double r;
};
void inputCircle(Circle* c) {

    printf("Nh?p t?a �? x c?a t�m h?nh tr?n: ");
    scanf("%d", &c->x);
    printf("Nh?p t?a �? y c?a t�m h?nh tr?n: ");
    scanf("%d", &c->y);
    printf("Nh?p b�n k�nh c?a h?nh tr?n: ");
    scanf("%lf", &c->r);
}

// H�m sinh th�ng tin ng?u nhi�n cho m?t h?nh tr?n
void generateCircle(Circle* c) {

    srand(time(NULL));

    c->x = rand() % 100;
    c->y = rand() % 100;
    c->r = rand() % 10 + 1;
}

void displayCircle(Circle c) {

    printf("T?a �? t�m: (%d, %d)\n", c.x, c.y);
    printf("B�n k�nh: %.2lf\n", c.r);
}

// H�m ki?m tra hai h?nh tr?n c� giao nhau hay kh�ng
bool checkIntersect(Circle c1, Circle c2) {

    // T�nh kho?ng c�ch gi?a hai t�m
    double d = sqrt((c1.x - c2.x) * (c1.x - c2.x) + (c1.y - c2.y) * (c1.y - c2.y));

    // N?u kho?ng c�ch nh? h�n t?ng hai b�n k�nh th? hai h?nh tr?n giao nhau
    if (d <= c1.r + c2.r) {
        return true;
    }

    return false;
}

// H�m hi?n th? th�ng tin v? c�c h?nh tr?n
void displayCircles(Circle* circles, int n) {

    printf("Th�ng tin v? c�c h?nh tr?n:\n");
    for (int i = 0; i < n; i++) {
        displayCircle(circles[i]);
    }
}

// H�m t?m h?nh tr?n giao v?i nhi?u h?nh tr?n kh�c nh?t


    


int main() {

    // Nh?n s? l�?ng h?nh tr?n
    int n;
    printf("Nh?p s? l�?ng h?nh tr?n: ");
    scanf("%d", &n);

    // Kh?i t?o m?ng c�c h?nh tr?n
    Circle* circles = (Circle*)malloc(n * sizeof(Circle));

    // L?a ch?n c�ch nh?p th�ng tin cho c�c h?nh tr?n
    int choice;
    printf("B?n mu?n nh?p th�ng tin cho c�c h?nh tr?n theo c�ch n�o?\n1. Nh?p th? c�ng\n2. T? �?ng sinh ng?u nhi�n\n");
    scanf("%d", &choice);

    // Nh?p th�ng tin cho c�c h?nh tr?n
    if (choice == 1) {
        for (int i = 0; i < n; i++) {
            inputCircle(&circles[i]);
        }
    } else {
        for (int i = 0; i < n; i++) {
            generateCircle(&circles[i]);
        }
    }

    // T?m h?nh tr?n giao v?i nhi?u h?nh tr?n kh�c nh?t
    Circle* mostIntersectedCircle = findMostIntersectedCircle(circles, n);

    // Hi?n th? th�ng tin v? c�c h?nh tr?n
    displayCircles(circles, n);

    // Hi?n th? th�ng tin v? h?nh tr?n giao v?i nhi?u h?nh tr?n kh�c nh?t
    if (mostIntersectedCircle != NULL) {
        printf("\nH?nh tr?n giao v?i nhi?u h?nh tr?n kh�c nh?t l�:\n");
        displayCircle(*mostIntersectedCircle);
    } else {
        printf("\nKh�ng c� h?nh tr?n n�o giao nhau.");
    }

    // Gi?i ph�ng b? nh?
    free(circles);

    return 0;
}



    return mostIntersectedCircle;
}


