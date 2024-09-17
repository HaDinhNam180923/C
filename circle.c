// Chýõng tr?nh cho phép t?o ra m?t m?ng ð?ng các ph?n t? là các h?nh tr?n
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Circle* findMostIntersectedCircle(Circle* circles, int n) {

    // Kh?i t?o bi?n ð? lýu tr? h?nh tr?n giao v?i nhi?u h?nh tr?n khác nh?t
    Circle* mostIntersectedCircle = NULL;
    int maxIntersect = 0;

    // Duy?t qua t?t c? các h?nh tr?n
    for (int i = 0; i < n; i++) {
        int intersect = 0;

        // Duy?t qua t?t c? các h?nh tr?n khác
        for (int j = i + 1; j < n; j++) {
            if (checkIntersect(circles[i], circles[j])) {
                intersect++;
            }
        }

        // N?u s? lý?ng h?nh tr?n giao nhau nhi?u hõn th? c?p nh?t
        if (intersect > maxIntersect) {
            maxIntersect = intersect;
            mostIntersectedCircle = &circles[i];
        }
    }
// Khai báo c?u trúc h?nh tr?n
struct Circle {
    int x;
    int y;
    double r;
};
void inputCircle(Circle* c) {

    printf("Nh?p t?a ð? x c?a tâm h?nh tr?n: ");
    scanf("%d", &c->x);
    printf("Nh?p t?a ð? y c?a tâm h?nh tr?n: ");
    scanf("%d", &c->y);
    printf("Nh?p bán kính c?a h?nh tr?n: ");
    scanf("%lf", &c->r);
}

// Hàm sinh thông tin ng?u nhiên cho m?t h?nh tr?n
void generateCircle(Circle* c) {

    srand(time(NULL));

    c->x = rand() % 100;
    c->y = rand() % 100;
    c->r = rand() % 10 + 1;
}

void displayCircle(Circle c) {

    printf("T?a ð? tâm: (%d, %d)\n", c.x, c.y);
    printf("Bán kính: %.2lf\n", c.r);
}

// Hàm ki?m tra hai h?nh tr?n có giao nhau hay không
bool checkIntersect(Circle c1, Circle c2) {

    // Tính kho?ng cách gi?a hai tâm
    double d = sqrt((c1.x - c2.x) * (c1.x - c2.x) + (c1.y - c2.y) * (c1.y - c2.y));

    // N?u kho?ng cách nh? hõn t?ng hai bán kính th? hai h?nh tr?n giao nhau
    if (d <= c1.r + c2.r) {
        return true;
    }

    return false;
}

// Hàm hi?n th? thông tin v? các h?nh tr?n
void displayCircles(Circle* circles, int n) {

    printf("Thông tin v? các h?nh tr?n:\n");
    for (int i = 0; i < n; i++) {
        displayCircle(circles[i]);
    }
}

// Hàm t?m h?nh tr?n giao v?i nhi?u h?nh tr?n khác nh?t


    


int main() {

    // Nh?n s? lý?ng h?nh tr?n
    int n;
    printf("Nh?p s? lý?ng h?nh tr?n: ");
    scanf("%d", &n);

    // Kh?i t?o m?ng các h?nh tr?n
    Circle* circles = (Circle*)malloc(n * sizeof(Circle));

    // L?a ch?n cách nh?p thông tin cho các h?nh tr?n
    int choice;
    printf("B?n mu?n nh?p thông tin cho các h?nh tr?n theo cách nào?\n1. Nh?p th? công\n2. T? ð?ng sinh ng?u nhiên\n");
    scanf("%d", &choice);

    // Nh?p thông tin cho các h?nh tr?n
    if (choice == 1) {
        for (int i = 0; i < n; i++) {
            inputCircle(&circles[i]);
        }
    } else {
        for (int i = 0; i < n; i++) {
            generateCircle(&circles[i]);
        }
    }

    // T?m h?nh tr?n giao v?i nhi?u h?nh tr?n khác nh?t
    Circle* mostIntersectedCircle = findMostIntersectedCircle(circles, n);

    // Hi?n th? thông tin v? các h?nh tr?n
    displayCircles(circles, n);

    // Hi?n th? thông tin v? h?nh tr?n giao v?i nhi?u h?nh tr?n khác nh?t
    if (mostIntersectedCircle != NULL) {
        printf("\nH?nh tr?n giao v?i nhi?u h?nh tr?n khác nh?t là:\n");
        displayCircle(*mostIntersectedCircle);
    } else {
        printf("\nKhông có h?nh tr?n nào giao nhau.");
    }

    // Gi?i phóng b? nh?
    free(circles);

    return 0;
}



    return mostIntersectedCircle;
}


