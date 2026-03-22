#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "my_math.h"

int main() {
    int a, b;

    printf("두 정수를 입력하세요: ");

    
    if (scanf("%d %d", &a, &b) != 2) {
        fprintf(stderr, "오류: 두 개의 정수를 입력해야 합니다.\n");
        return 1; 
    }

   
    if (a == 0 || b == 0) {
        fprintf(stderr, "오류: 0은 GCD 및 LCM 계산에 사용할 수 없습니다.\n");
        return 1; 
    }

    int gcd = GCD(a, b);
    int lcm = LCM(a, b);

    printf("GCD: %d, LCM: %d\n", gcd, lcm);

    return 0;
}

