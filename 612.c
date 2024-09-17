#include <stdio.h>
#define DA 0.12
#define HRA 150
#define TA 120
#define OT 450
#define PF 0.14
#define IT 0.15

int main() {
    int x;
    float y;
    scanf("%d", &x);
    printf("%.2f", x + (float)(x*DA) + HRA + TA + OT - (float)(x*PF)- (float)(x*IT));

    return 0;
}
