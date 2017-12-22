#include <stdio.h>
#include "main.h"

#ifndef TEST
int main() {
    printf("�п�J�t���۪��ƶq�G ");
    int stoneCount;
    scanf("%d", &stoneCount);
    printf("�A�`�@�i�H�i�� %d ��", getDrawCount(stoneCount));
    return 0;
}
#endif // TEST

int addNumber(int a, int b) {
    return a + b;
}

int getTriangleType(int a, int b, int c) {
    if (a > b && a > c) {
        int temp = c; c = a; a = temp;
    }
    else if (b > a && b > c) {
        int temp = c; c = b; b = temp;
    }

    if (a + b <= c) {
        return -2;
    }
    else if (a * a + b * b == c * c) {
        return 0;
    }
    else if (a * a + b * b > c * c) {
        return 1;
    }
    else if (a * a + b * b < c * c) {
        return -1;
    }
    return -3;
}

int getDrawCount(int stoneCount) {
    if (stoneCount < 0) return 0;

    return stoneCount / 3;
}
