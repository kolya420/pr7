#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x1, y1, x2, y2;
    double distance;
    printf("Enter the points of origin of the vector (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the points of the end of the vector (x2, y2): ");
    scanf("%d %d", &x2, &y2);
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Length.: %.6f\n", distance);
    return 0;
}