#include "my_math.h"

int GCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return GCD(b, a % b);
}

int LCM(int a, int b) {
    if (a == 0 || b == 0) {
        return 0; 
    }
    return (a * b) / GCD(a, b);
}

